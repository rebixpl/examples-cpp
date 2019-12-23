#include <iostream>
#include <SFML/Window.hpp>

int main()
{
    //Windows in SFML are defined by the sf::Window class.
    //the video mode, defines the size of the window next is name of the window
    //and style of window

    /*SF::STYLE elements:
    sf::Style::None - No decoration at all (useful for splash screens, for example)
    sf::Style::Titlebar - window with titlebar
    sf::Style::Resize - window with resize and maximize button
    sf::Style::Close - window with close button
    sf::Style::Fullscreen - fullscreen mode, requires a valid video mode
    sf::Style::Default - default style (Titlebar + Resize + Close)
    */

    sf::Window window(sf::VideoMode(800, 600), "My window!", sf::Style::Default);

    //VERTICAL SYNCHRONIZATION (call it once, after creating window)
    window.setVerticalSyncEnabled(true);
    
    //You can create window with create() function too
    sf::Window window2;
    window2.create(sf::VideoMode(600, 400), "My second window!");
    
    //FPS LIMIT (call it once, after creating window)
    //Never use both setVerticalSyncEnabled and setFramerateLimit at the same time!
    //They would badly mix and make things worse. 
    window2.setFramerateLimit(60);

    //run the program as long as the window is open
    while(window.isOpen())
    {
       //check all window events
       sf::Event event;
       while(window.pollEvent(event))
       {
           //"close request"
            if(event.type == sf::Event::Closed)
                window.close();

            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::P)
                // change the POSITION of the window (relatively to the desktop)
                window.setPosition(sf::Vector2i(10, 50));

            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S)
                //change the SIZE of the window
                window.setSize(sf::Vector2u(240, 240));

            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::T)
                //change the TITLE of the window
                window.setTitle("JD");

            if(event.type == sf::Event::Resized)
            {
                system("CLS");

                //GET THE SIZE of the window
                sf::Vector2u windowSize = window.getSize();
                unsigned int width = windowSize.x;
                unsigned int height = windowSize.y;

                std::cout << "width: " << width << " height: " << height;
            }
       }
    }

    return 0;
}
