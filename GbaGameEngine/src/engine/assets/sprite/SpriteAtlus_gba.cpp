#include "SpriteAtlus.h"
#include "engine/base/colour/Palette.h"

SpriteAtlus::SpriteAtlus()
	: m_palette(NULL)
	, m_paletteLength(0)
	, m_isPaletteLoaded(false)
	, m_paletteIndex(INVALID_PALETTE_INDEX)
{
}


SpriteAtlus::~SpriteAtlus()
{
}
