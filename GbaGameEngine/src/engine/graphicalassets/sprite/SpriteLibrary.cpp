#include "SpriteLibrary.h"
#include "engine/gba/graphics/oam/GBAAttributeFunctions.h"

#define SPRITE_ATLUS_ENTRY(Namespace) \
namespace Namespace\
{\
	extern const u32 spriteCount; \
	extern const u8 paletteLength; \
	extern const u16 palette[]; \
	extern const u8 widthMap[]; \
	extern const u8 heightMap[]; \
	extern const u32 dataLength; \
	extern const u16 data[]; \
	extern const u32 offsets[]; \
}\

	SPRITE_ATLUS_LIST
#undef SPRITE_ATLUS_ENTRY

SpriteLibrary::SpriteLibrary()
{
#define SPRITE_ATLUS_ENTRY(Namespace) \
	AddSpriteSheet(Namespace::spriteCount, Namespace::paletteLength, Namespace::palette, Namespace::widthMap, Namespace::heightMap, Namespace::dataLength, Namespace::data, Namespace::offsets);

	SPRITE_ATLUS_LIST

#undef SPRITE_ATLUS_ENTRY
}

void SpriteLibrary::AddSpriteSheet(
	const u32 spriteCount, 
	const u8 paletteLength, 
	const u16 * palette, 
	const u8 * widthMap, 
	const u8 * heightMap, 
	const u32 dataLength, 
	const u16 * data, 
	const u32 * offsets)
{
	SpriteAtlus* atlus = m_spriteAtlusCollection.AddNew();
	atlus->m_paletteLength = paletteLength;
	atlus->m_palette = palette;

	atlus->m_sprites.Reserve(spriteCount);

	for (u32 i = 0; i < spriteCount; ++i)
	{
		Sprite* sprite = atlus->m_sprites.AddNew();
		sprite->m_atlus = atlus;
		GBA::AttributeFunctions::GetSizeAttributesFromPixelSize(GBAAttrFnVector2(widthMap[i], heightMap[i]), sprite->m_shape, sprite->m_sizeMode);
		sprite->m_pixelMapData = data + offsets[i];
		if (i + 1 < spriteCount)
		{
			sprite->m_pixelMapDataLength = offsets[i + 1] - offsets[i];
		}
		else
		{
			sprite->m_pixelMapDataLength = dataLength - offsets[i];
		}
	}
}

SpriteLibrary::~SpriteLibrary()
{
}

Sprite * SpriteLibrary::GetSprite(SpriteAtlusID::Enum atlusId, u32 spriteIndex)
{
	SpriteAtlus& atlus = m_spriteAtlusCollection[atlusId];
	if (spriteIndex < atlus.m_sprites.Count())
		return &atlus.m_sprites[spriteIndex];

	return NULL;
}
