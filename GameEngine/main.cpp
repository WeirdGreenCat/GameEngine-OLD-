#include "includer.hpp"
#include "Include.hpp"

using namespace sf;

int main(void) 
{
	RenderWindow window(VideoMode(1024, 768), "Game", sf::Style::Default, sf::ContextSettings(24));
	ofstream save;
	save.open("pMap.pMap");
	for (int x = 0; x < 256; x++)
	{
		for (int y = 0; y < 50; y++)
		{
			for (int z = 0; z < 256; z++)
			{
				
				
				save << "0";
			}
		}
	}
	save.close();
	std::cin;
	return 0;
}