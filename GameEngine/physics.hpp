#include "includer.hpp"
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
	
	~PhisicsMap()
	{
		//delete[] mass;
	}
	private:
	
	byte mass[256][50][256];

};

