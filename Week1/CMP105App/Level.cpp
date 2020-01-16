#include "Level.h"
using namespace std;


Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(150, 150);
	rect.setFillColor(sf::Color::Blue);

	rect1.setSize(sf::Vector2f(100, 100));
	rect1.setPosition(125, 125);
	rect1.setFillColor(sf::Color::Green);

	rect2.setSize(sf::Vector2f(150, 150));
	rect2.setPosition(100, 100);
	rect2.setFillColor(sf::Color::Red);

	circle.setRadius(50.0f);
	circle.setPosition(530, 300);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(10.0f);
	circle.setFillColor(sf::Color::Blue);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	text.setString("Hello, world!");
	text.setPosition(530, 5);

	rect3.setSize(sf::Vector2f(150, 150));
	rect3.setPosition(1000, 500);
	rect3.setFillColor(sf::Color::Green);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect3.setPosition(pos.x - 150, pos.y - 150);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect2);
	window->draw(rect1);
	window->draw(rect);

	window->draw(circle);

	window->draw(text);

	window->draw(rect3);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}