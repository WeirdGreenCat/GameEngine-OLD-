#include "includer.hpp"
class PhisicsMap
{
	public:
	PhisicsMap(string path)
	{
		ifstream file(path);
		
			for (int x = 0; x < 100; x++)
			{
				for (int y = 0; y < 100; y++)
				{
					for (int z = 0; z < 100; z++)
					{
						mass[x][y][z] = file.get();
					}
				}
			}
			file.close();
	};
	
	~PhisicsMap()
	{
		delete[] mass;
	}
	private:
	
	byte mass[100][100][100];

};

