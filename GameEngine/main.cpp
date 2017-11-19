#include "includer.hpp"
#include "Include.hpp"

using namespace sf;

int main(void) 
{
	RenderWindow window(VideoMode(1024, 768), "Game", sf::Style::Default, sf::ContextSettings(24));
	PhisicsMap *pMap = new PhisicsMap("pMap.pMap");

	std::cin;
	return 0;
}