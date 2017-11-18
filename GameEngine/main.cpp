#include "includer.hpp"
#include "Include.hpp"

using namespace sf;

int main(void) 
{
	RenderWindow window(VideoMode(1024, 768), "Game", sf::Style::Default, sf::ContextSettings(24));
	PhisicsMap *pMap = new PhisicsMap("pMap.Pmap");
	/*ofstream strm;
	strm.open("pMap.pMap");
	for (int x = 0; x < 100; x++)
	{
		for (int y = 0; y < 100; y++)
		{
			for (int z = 0; z < 100; z++)
			{
				strm << '1';
			}


		}
	}*/
	std::cin;
	return 0;
}
