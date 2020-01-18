#define EWRAM_DATA __attribute__((section(".ewram")))

namespace __binary_spritesheet_Reimu 
{
	// File Header
	extern EWRAM_DATA const unsigned long spriteCount = 12;
	extern EWRAM_DATA const unsigned char paletteLength = 9;
	extern EWRAM_DATA const unsigned long dataLength = 768;

	// Bit0 - 3   Data size in bit units(normally 4 or 8). May be reserved/unused for other compression types 
	// Bit4-7   Compressed type 
	// Bit8-31  Unused, generated in-game as 24bit size of decompressed data in bytes, probably 
	extern EWRAM_DATA const unsigned long compressionTypeSize = 148; 

	extern EWRAM_DATA const unsigned short palette[] = 
	{
		0x0000, 0x7FFF, 0x0000, 0x7FFF, 0x109F, 
		0x0CAA, 0x5FBF, 0x0001, 0x771F, 
	};

	extern EWRAM_DATA const unsigned char widthMap[] = 
	{
		16, 16, 16, 16, 16, 
		16, 16, 16, 16, 16, 
		16, 16, 
	};

	extern EWRAM_DATA const unsigned char heightMap[] = 
	{
		32, 32, 32, 32, 32, 
		32, 32, 32, 32, 32, 
		32, 32, 
	};

	extern EWRAM_DATA const unsigned long offsets[] = 
	{
		0, 64, 128, 192, 256, 
		320, 384, 448, 512, 576, 
		640, 704, 
	};

	extern EWRAM_DATA const unsigned long data[] = 
	{
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11112111, 0x11123211, 0x11243211, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11121111, 
		0x11232111, 0x11234211, 0x22443211, 0x22223211, 0x55552111, 
		0x55555211, 0x22255211, 0x66625521, 0x62662521, 0x62862521, 
		0x11234422, 0x11232222, 0x11125555, 0x11255555, 0x11255222, 
		0x12552666, 0x12526626, 0x12526826, 0x66662421, 0x66622521, 
		0x22226211, 0x44426211, 0x33332111, 0x44444211, 0x44422111, 
		0x22211111, 0x12426666, 0x12522666, 0x11262222, 0x11262444, 
		0x11123333, 0x11244444, 0x11122444, 0x11111222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11112111, 0x11123211, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11121111, 0x11232111, 0x11243211, 0x22443211, 0x22223211, 
		0x55552111, 0x55555211, 0x22255211, 0x66625211, 0x62662521, 
		0x11234211, 0x11234422, 0x11232222, 0x11125555, 0x11255555, 
		0x11255722, 0x11252666, 0x12526626, 0x62862521, 0x66662521, 
		0x66622471, 0x22222521, 0x44426211, 0x33332211, 0x44442111, 
		0x22221111, 0x12526826, 0x12526666, 0x12422666, 0x12572222, 
		0x11266244, 0x11226623, 0x11262244, 0x11122222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11121111, 0x11232111, 0x12432111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11211111, 
		0x12321111, 0x12342111, 0x24432111, 0x22232111, 0x55521111, 
		0x55552111, 0x22552111, 0x66255211, 0x26625211, 0x28625211, 
		0x12344222, 0x12322222, 0x11255555, 0x12555555, 0x12552222, 
		0x25526666, 0x25266266, 0x25268266, 0x66624211, 0x66225211, 
		0x22262111, 0x44262111, 0x33321111, 0x44442111, 0x44221111, 
		0x22111111, 0x24266666, 0x25226666, 0x12622222, 0x12624444, 
		0x11233333, 0x12444444, 0x11224444, 0x11112222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11121111, 0x11232111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11211111, 0x12321111, 0x12432111, 0x24432111, 0x22232111, 
		0x55521111, 0x55552111, 0x27552111, 0x66252111, 0x26625211, 
		0x12342111, 0x12344222, 0x12322222, 0x11255555, 0x12555555, 
		0x12552222, 0x12526666, 0x25266266, 0x28625211, 0x66625211, 
		0x66224211, 0x22275211, 0x42662111, 0x26622111, 0x42262111, 
		0x22221111, 0x25268266, 0x25266666, 0x74226666, 0x25222222, 
		0x12624444, 0x12233333, 0x11244444, 0x11122222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11211111, 
		0x12321111, 0x12342111, 0x11111111, 0x22222111, 0x55555211, 
		0x55555521, 0x55522221, 0x22266211, 0x66626211, 0x66826211, 
		0x12344222, 0x12342555, 0x11225555, 0x11125555, 0x11125555, 
		0x11122555, 0x11125252, 0x11125252, 0x66666211, 0x66662111, 
		0x22221111, 0x24211111, 0x62321111, 0x24442111, 0x44442111, 
		0x22221111, 0x11125252, 0x11112242, 0x11111252, 0x11111226, 
		0x11112326, 0x11124422, 0x11124444, 0x11112222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x12111111, 0x73211111, 0x11111111, 0x11111111, 0x22221111, 
		0x55552111, 0x55555211, 0x55222111, 0x22662111, 0x66262111, 
		0x73421111, 0x73442221, 0x73425557, 0x12255555, 0x11255555, 
		0x11255555, 0x11255552, 0x11252526, 0x68262111, 0x66662111, 
		0x66621111, 0x22211111, 0x42111111, 0x33221111, 0x44421111, 
		0x22211111, 0x11252226, 0x11252526, 0x11252426, 0x11122222, 
		0x11126624, 0x11122233, 0x11244444, 0x11222222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11112111, 0x11123211, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11121111, 0x11232111, 0x11243211, 0x22443211, 0x52223211, 
		0x52552111, 0x52555211, 0x52555211, 0x22555211, 0x55555211, 
		0x11234211, 0x11234422, 0x11232225, 0x11125525, 0x11255525, 
		0x11255525, 0x11255522, 0x11255555, 0x55555211, 0x55555211, 
		0x22222111, 0x44444211, 0x44444421, 0x33333321, 0x44444211, 
		0x22222111, 0x11255555, 0x11255555, 0x11122222, 0x11244444, 
		0x12444444, 0x12333333, 0x11244444, 0x11122222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11112111, 0x11123211, 0x11243211, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11121111, 
		0x11232111, 0x11234211, 0x22443211, 0x52223211, 0x52552111, 
		0x52555211, 0x52555211, 0x22555211, 0x55555211, 0x55555211, 
		0x11234422, 0x11232225, 0x11125525, 0x11255525, 0x11255525, 
		0x11255522, 0x11255555, 0x11255555, 0x55555211, 0x22222111, 
		0x44444211, 0x44444421, 0x33333211, 0x44444211, 0x44422111, 
		0x22211111, 0x11255555, 0x11122222, 0x11244444, 0x12444444, 
		0x11233333, 0x11244444, 0x11122444, 0x11111222, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 

		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 0x11111111, 
		0x11111111, 0x11111111, 0x11111111, 0x11111111, 

	};

}
