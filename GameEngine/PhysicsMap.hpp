#include "Includer.hpp"
#define byte unsigned char
class PhisicsMap
{
	public:
	PhisicsMap(string path)
	{
		ifstream file(path);

		for (int x = 0; x < 256; x++)
		{
			for (int y = 0; y < 50; y++)
			{
				for (int z = 0; z < 256; z++)
				{
					mass[x][y][z] = file.get();
				}
			}
		}
		file.close();
	}
	bool check(int x, int y, int z)
	{
		if (mass[x, y, z] != 0)
			return 0;
		else
			return 1;
	}
	~PhisicsMap()
	{
		//delete[] mass;
	}
	private:
	byte blockSize = 20;
	byte mass[256][50][256];

};