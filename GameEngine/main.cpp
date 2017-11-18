#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <iostream>
#include "config.hpp"

using namespace sf;

int main(void) 
{
	RenderWindow window(VideoMode(1024, 768), "Game", sf::Style::Default, sf::ContextSettings(24));

	return 0;
}