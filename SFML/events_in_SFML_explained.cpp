#include <iostream>
#include <SFML/Window.hpp>

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window", sf::Style::Default);
    window.setFramerateLimit(60);

    while(window.isOpen())
    {
        //sf::Event is a union, which means that only one of its members is valid at a time
        sf::Event event;

        //check the type of the event [pollEvent(event) or waitEvent(event)]
        while(window.pollEvent(event))
        {
            //window closed
            if(event.type == sf::Event::Closed)
                window.close();

            //window resized
            if(event.type == sf::Event::Resized)
            {
                system("cls");
                std::cout << "width: "<< event.size.width << "\n";
                std::cout << "height: " << event.size.height;
            }

            /* window lostFocus and gainedFocus
            The sf::Event::LostFocus and sf::Event::GainedFocus events are triggered
            when the window loses/gains focus, which happens when the user switches
            the currently active window. */
            if(event.type == sf::Event::LostFocus)
            {
                system("cls");
                std::cout << "window -> lost focus";
                //myGame.pause();
            }

            if(event.type == sf::Event::GainedFocus)
            {
                system("cls");
                std::cout << "window -> gained focus";
                //myGame.resume();
            }

            /* TextEntered event
            This event is typically used to catch user input in a text field.
            The member associated with this event is event.text, it contains
            the Unicode value of the entered character. You can either put it
            directly in a sf::String, or cast it to a char after making sure
            that it is in the ASCII range (0 - 127).  */
            if(event.type == sf::Event::TextEntered)
            {
                if(event.text.unicode < 128)
                {
                    system("cls");
                    std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode);
                }

            }

            /* The sf::Event::KeyPressed and sf::Event::KeyReleased events
            are triggered when a keyboard key is pressed/released.
            To achieve smooth movement with events, you must use a boolean that
            you set on KeyPressed and clear on KeyReleased; you can then move
            (independently of events) as long as the boolean is set. */
            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            {
                std::cout << "the escape key was pressed" << "\n";
                std::cout << "control: " << event.key.control << "\n"; //is the CTRL key pressed?
                std::cout << "alt: " << event.key.alt << "\n"; //Is the ALT key pressed?
                std::cout << "shift: " << event.key.shift << "\n"; //is the SHIFT key pressed?
                std::cout << "system: " << event.key.system << "\n"; // is the SYSTEM (windows like) key pressed?
            }

            //MouseWheelScrolled
            if(event.type == sf::Event::MouseWheelScrolled)
            {
                system("CLS");

                if(event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                    std::cout << "wheel type: vertical" << "\n";
                else if(event.mouseWheelScroll.wheel == sf::Mouse::HorizontalWheel)
                    std::cout << "wheel type: horizontal" << "\n";
                else
                    std::cout << "wheel type: unknown" << "\n";

                std::cout << "wheel movement: " << event.mouseWheelScroll.delta << "\n";
                std::cout << "mouse x: " << event.mouseWheelScroll.x << "\n";
                std::cout << "mouse y: " << event.mouseWheelScroll.y << "\n";
            }

            //MouseButtonPressed and MouseButtonReleased events
            if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Right)
            {
                std::cout << "the right mouse button was pressed" << "\n";
                std::cout << "mouse x: " << event.mouseButton.x << "\n";
                std::cout << "mouse y: " << event.mouseButton.y << "\n";
            }

            //MouseMoved event
            if(event.type == sf::Event::MouseMoved)
            {
                system("CLS");
                std::cout << "new mouse x: " << event.mouseMove.x << "\n";
                std::cout << "new mouse y: " << event.mouseMove.y << "\n";
            }

            /*MouseEntered and MouseLeft
            The sf::Event::MouseEntered and sf::Event::MouseLeft events are
            triggered when the mouse cursor enters/leaves the window. */
            if(event.type == sf::Event::MouseEntered)
            {
                system("CLS");
                std::cout << "the mouse has entered the window" << "\n";
            }

            if(event.type == sf::Event::MouseLeft)
            {
                system("CLS");
                std::cout << "the mouse has left the window" << "\n";
            }

        }
    }

    return 0;
}
