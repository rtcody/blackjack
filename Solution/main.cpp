#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using sf::Texture; 
using sf::Sprite; 


int main()
{
    sf::RenderWindow window(sf::VideoMode(1500, 1500), "SFML works!");
    sf::CircleShape shape(100.f);
    Texture queenOHearts; 
    queenOHearts.loadFromFile("Cards/quee n_of_hearts2.png"); 
    Sprite hearts(queenOHearts);   
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