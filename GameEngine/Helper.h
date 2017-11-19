#include "includer.hpp"
namespace help
{
	void help()
	{
		ofstream save;
		save.open("pMap.pMap");
		for (int x = 0; x < 256; x++)
		{
			for (int y = 0; y < 50; y++)
			{
				for (int z = 0; z < 256; z++)
				{
					if (y == 0)
					{
						save << "1";
					}
					else save << "0";


				}
			}
		}
		save.close();
	}
}