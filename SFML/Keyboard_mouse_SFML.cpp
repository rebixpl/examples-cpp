#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window", sf::Style::Default);
    window.setFramerateLimit(60);

    sf::RectangleShape shape;
    shape.setSize(sf::Vector2f(100.f, 150.f));
    shape.setFillColor(sf::Color::Green);

    while(window.isOpen())
    {
        //Handle events
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        //Move stuff
        //KEYBOARD
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            //d key is pressed: move our rectangle to the right
            shape.move(1.f, 0.f);
        }

        //MOUSE
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            system("CLS");
            //Left mouse button is pressed: shoot
            //gun.fire();

            //get the global mouse position (relative to the desktop)
            sf::Vector2i globalPosition = sf::Mouse::getPosition();
            std::cout << "globalPosition: " << globalPosition.x << " / " << globalPosition.y << "\n";

            //get the local mouse position (relative to a window)
            sf::Vector2i localPosition = sf::Mouse::getPosition(window);
            std::cout << "localPosition: " << localPosition.x << " / " << localPosition.y << "\n";
        }

        if(sf::Mouse::isButtonPressed(sf::Mouse::XButton1))
        {
            //set the mouse position globally (relative to the desktop)
            sf::Mouse::setPosition(sf::Vector2i(10, 50));

            // set the mouse position locally (relative to a window)
            sf::Mouse::setPosition(sf::Vector2i(100, 200), window);
        }


        //Draw stuff
        window.clear(sf::Color(0, 0, 0));

        window.draw(shape);

        window.display();


    }

    return 0;
}
