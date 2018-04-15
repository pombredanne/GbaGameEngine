#ifndef PRAGMA_ONCE_ENGINE_GBA_GRAPHICS_TILES_GBATILEBANK_H
#define PRAGMA_ONCE_ENGINE_GBA_GRAPHICS_TILES_GBATILEBANK_H

#include "../../../base/Typedefs.h"
#include "../../../base/core/stl/Array.h"
#include "../../../base/core/stl/List.h"

namespace GBA
{
	enum TileBlockGroups
	{
		Bg0,
		Bg1,
		Bg2,
		Bg3,
		SpriteLower,		// May be used by backgrounds in bitmap modes
		SpriteHigher,

		BlockGroupCount
	};

	typedef u16 tTileId;
	typedef List<u16> tSpriteData;
	
	class TileBank
	{
		static const int CharBlockSize = 512;
		static const int CharBlock8Size = 256;

		typedef u32 tPixelIndex4bppX8;
		typedef u32 tPixelIndex8bppX4;
		typedef Array<tPixelIndex4bppX8, 8> Tile;	// Tiles are 8x8 pixels. 32 bits = 4 bytes, 4 bytes * 2 pixels per byte * 8 rows = 1 tile
		typedef Array<tPixelIndex8bppX4, 16> Tile8;
		typedef Array<Tile, CharBlockSize> CharBlock;
		typedef Array<Tile8, CharBlock8Size> CharBlock8;
		typedef Array<CharBlock, BlockGroupCount> TileVRam;
		typedef Array<CharBlock8, BlockGroupCount> TileVRam8;

		static TileVRam * s_VRam;
		static TileVRam8 * s_VRam8;
	
		static CharBlock* EditTileBlock(TileBlockGroups group) { return &((*s_VRam)[int(group)]); }
		static CharBlock8* EditTileBlock8(TileBlockGroups group) { return &((*s_VRam8)[int(group)]); }

		static bool LoadTiles(const List<u16>& pixelMap, TileBlockGroups tileBlock, u16 startTileIndex);
	
	public:
		// Load tiles that use 4bbp
		static bool LoadSpriteTiles(const tSpriteData& pixelMap, tTileId tileId);
	};
}

#endif
