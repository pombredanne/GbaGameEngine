#define EWRAM_DATA __attribute__((section(".ewram")))

namespace __binary_spritesheet_DebugFont_8x8
{
	// File Header
	extern EWRAM_DATA const unsigned long spriteCount = 95;
	extern EWRAM_DATA const unsigned char paletteLength = 3;
	extern EWRAM_DATA const unsigned long dataLength = 380;

	// Bit0 - 3   Data size in bit units(normally 4 or 8). May be reserved/unused for other compression types 
	// Bit4-7   Compressed type 
	// Bit8-31  Unused, generated in-game as 24bit size of decompressed data in bytes, probably 
	extern EWRAM_DATA const unsigned long compressionTypeSize = 146;

	extern EWRAM_DATA const unsigned short palette[] =
	{
		0x0000, 0x7FFF, 0x0000,
	};

	extern EWRAM_DATA const unsigned char widthMap[] =
	{
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,

	};

	extern EWRAM_DATA const unsigned char heightMap[] =
	{
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,
		8, 8, 8, 8, 8,

	};

	extern EWRAM_DATA const unsigned long offsets[] =
	{
		0, 4, 8, 12, 16,
		20, 24, 28, 32, 36,
		40, 44, 48, 52, 56,
		60, 64, 68, 72, 76,
		80, 84, 88, 92, 96,
		100, 104, 108, 112, 116,
		120, 124, 128, 132, 136,
		140, 144, 148, 152, 156,
		160, 164, 168, 172, 176,
		180, 184, 188, 192, 196,
		200, 204, 208, 212, 216,
		220, 224, 228, 232, 236,
		240, 244, 248, 252, 256,
		260, 264, 268, 272, 276,
		280, 284, 288, 292, 296,
		300, 304, 308, 312, 316,
		320, 324, 328, 332, 336,
		340, 344, 348, 352, 356,
		360, 364, 368, 372, 376,

	};

	extern EWRAM_DATA const unsigned long data[] =
	{
		0x09000900, 0x09000900, 0x09000A00, 0x00000A00,

		0x09900990, 0x00000AA0, 0x00000000, 0x00000000,

		0x01100000, 0x01100554, 0x01100554, 0x00000000,

		0x15400100, 0x05400110, 0x05501100, 0x00000100,

		0x04410014, 0x14400114, 0x14004110, 0x00000000,

		0x00100540, 0x41400010, 0x41401410, 0x00000000,

		0x09000900, 0x00000A00, 0x00000000, 0x00000000,

		0x00400100, 0x00100010, 0x01000040, 0x00000000,

		0x01000040, 0x04000400, 0x00400100, 0x00000000,

		0x05401110, 0x05401550, 0x00001110, 0x00000000,

		0x01000000, 0x15500100, 0x01000100, 0x00000000,

		0x00000000, 0x00000000, 0x09000000, 0x02800A40,

		0x00000000, 0x05500000, 0x00000000, 0x00000000,

		0x00000000, 0x00000000, 0x09000000, 0x00000A00,

		0x04001000, 0x00400100, 0x00040010, 0x00000000,

		0x04100140, 0x10041004, 0x01400410, 0x00000000,

		0x01400100, 0x01000100, 0x05400100, 0x00000000,

		0x10040550, 0x01400400, 0x15540010, 0x00000000,

		0x10040550, 0x01400400, 0x05501004, 0x00000000,

		0x01400100, 0x01040110, 0x01000554, 0x00000000,

		0x00041554, 0x10000554, 0x05501004, 0x00000000,

		0x00040550, 0x10040554, 0x05501004, 0x00000000,

		0x04001554, 0x00400100, 0x00040010, 0x00000000,

		0x10040550, 0x10040550, 0x05501004, 0x00000000,

		0x10040550, 0x15501004, 0x05501000, 0x00000000,

		0x00000000, 0x00000100, 0x01000000, 0x00000000,

		0x00000000, 0x00000100, 0x01000000, 0x00000040,

		0x14000000, 0x00140140, 0x14000140, 0x00000000,

		0x00000000, 0x00001554, 0x00001554, 0x00000000,

		0x00140000, 0x14000140, 0x00140140, 0x00000000,

		0x26A40950, 0x29402428, 0x02400A80, 0x00000280,

		0x05500000, 0x05410404, 0x05440441, 0x05400010,

		0x09400940, 0x25502690, 0x90249AA4, 0x0000A028,

		0x26A40954, 0x26A40954, 0x29542424, 0x00000AA8,

		0x26A40950, 0x00012829, 0x29582406, 0x00000AA0,

		0x26A40954, 0x24242424, 0x29542424, 0x00000AA8,

		0x2AA42554, 0x0AA40954, 0x25540024, 0x00002AA8,

		0x2AA42554, 0x0AA40954, 0x00240024, 0x00000028,

		0x26A40950, 0x25492829, 0x295826A6, 0x00000AA0,

		0x90249024, 0x9AA49554, 0x90249024, 0x0000A028,

		0xA9A09550, 0x09000900, 0x95502900, 0x0000AAA0,

		0x24002540, 0x24002400, 0x29582404, 0x00000AA0,

		0x09242424, 0x02540264, 0x262409A4, 0x00002828,

		0x00240024, 0x00240024, 0x95540024, 0x0000AAA8,

		0x50144004, 0x69A46464, 0x40244A24, 0x00008028,

		0x90969026, 0x99A69266, 0x98269626, 0x0000A02A,

		0x9A902540, 0x90909090, 0xA5609090, 0x00002A80,

		0x26A40954, 0x0AA42954, 0x00240024, 0x00000028,

		0x9A902540, 0x90909090, 0xA5609090, 0xA0009A80,

		0x26A40954, 0x0A642954, 0x262409A4, 0x00002828,

		0x9A902540, 0x2580A260, 0xA5609A90, 0x00002A80,

		0xA9A85554, 0x09000900, 0x09000900, 0x00000A00,

		0x90269026, 0x90249024, 0xA5589024, 0x00002AA0,

		0x90264009, 0xA4989024, 0x29602490, 0x00000A80,

		0x40264026, 0x46644124, 0x60A45A94, 0x00008028,

		0xA49A9026, 0x09422962, 0x98A62692, 0x0000A02A,

		0x90984024, 0x2980A660, 0x09000900, 0x00000A00,

		0xA6AA9556, 0x0A402900, 0x95542A90, 0x0000AAA8,

		0x00100150, 0x00100010, 0x01500010, 0x00000000,

		0x00100004, 0x01000040, 0x10000400, 0x00000000,

		0x01000150, 0x01000100, 0x01500100, 0x00000000,

		0x01100040, 0x00000000, 0x00000000, 0x00000000,

		0x00000000, 0x00000000, 0x15540000, 0x00000000,

		0x09800240, 0x00000A00, 0x00000000, 0x00000000,

		0x25500000, 0x95509AA0, 0x995896A4, 0x00002AA0,

		0x00240024, 0x9AA42554, 0xA5649094, 0x00002AA8,

		0x25400000, 0x00902A90, 0x25600090, 0x00002A80,

		0x90009000, 0x9AA49550, 0x99589424, 0x0000AAA0,

		0x25500000, 0x95549AA4, 0x2558AAA4, 0x00002AA0,

		0x09400000, 0x09500A40, 0x02400A60, 0x00000280,

		0x26500000, 0x265025A4, 0x29502680, 0x00000AA0,

		0x00900090, 0x26900950, 0x24902490, 0x000028A0,

		0x0A000900, 0x09000900, 0x09000900, 0x00000A00,

		0x0A000900, 0x09800940, 0x09000900, 0x0A000900,

		0x00900090, 0x29902490, 0x25900A50, 0x00002AA0,

		0x02400240, 0x02400240, 0x09400240, 0x00000A80,

		0x94940000, 0x9AA49964, 0x90249024, 0x0000A028,

		0x95900000, 0x92909A50, 0x90909090, 0x0000A0A0,

		0x25500000, 0x90249AA4, 0x25509024, 0x00002AA0,

		0x25640000, 0x90A49A94, 0x2AA4A554, 0x00280024,

		0x99500000, 0x982496A4, 0x9AA09558, 0xA0009000,

		0x25900000, 0xA2909A50, 0x00900090, 0x000000A0,

		0x25400000, 0x09602A90, 0x29502680, 0x00000AA0,

		0x25500240, 0x02402A60, 0x02400240, 0x00000280,

		0x90900000, 0x90909090, 0x99609490, 0x0000AA80,

		0x90240000, 0x90249024, 0x2960A498, 0x00000A80,

		0x40090000, 0x40094009, 0x96949966, 0x0000A8A8,

		0x90260000, 0x2962A49A, 0x06900942, 0xA02898A4,

		0x90240000, 0xA6609098, 0x0A402980, 0x00A80294,

		0x25500000, 0x298026A0, 0x25500A40, 0x00002AA0,

		0x2A402540, 0x02500250, 0x25400260, 0x00002A80,

		0x01000100, 0x01000100, 0x01000100, 0x00000100,

		0x01000150, 0x05000500, 0x01500100, 0x00000000,

		0x00000000, 0x10500000, 0x00000504, 0x00000000,

		0x15541554, 0x15541554, 0x15541554, 0x00000000,

	};

}
