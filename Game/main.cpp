#include "include/WindowManager.hpp"

int main()
{
    WindowManager *windowManager;
    windowManager = new WindowManager();

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while( windowManager->getWindow()->isOpen() )
    {
        sf::Event event;
        while (windowManager->getWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::KeyReleased)
            {
                if(event.key.code == sf::Keyboard::Escape)
                    windowManager->getWindow()->close();

                if(event.key.code == sf::Keyboard::U)
                    windowManager->updateWindow();
            }

            if (event.type == sf::Event::Closed)
                windowManager->getWindow()->close();
        }

        windowManager->getWindow()->clear();
        windowManager->getWindow()->draw(shape);
        windowManager->getWindow()->display();
    }

    delete windowManager;

    return 0;
}
