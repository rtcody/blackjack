#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1500, 1500), "SFML works!");
    sf::CircleShape shape(100.f);
    sf::Texture queenOHearts; 
    queenOHearts.loadFromFile("Cards/queen_of_hearts2.png"); 
   sf::Sprite hearts(queenOHearts);   
    shape.setFillColor(sf::Color::Green);   

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        

        window.clear();
        window.draw(hearts);
        window.display();
    }

    return 0;
}