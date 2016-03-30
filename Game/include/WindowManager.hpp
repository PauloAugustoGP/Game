#ifndef _WINDOWMANAGER_H_
#define _WINDOWMANAGER_H_

#include <SFML/Graphics.hpp>

#include <iostream>

class WindowManager
{
    public:
        WindowManager();
        virtual ~WindowManager();

        void createWindow();
        void updateWindow();

        sf::RenderWindow* getWindow();

    private:
        sf::RenderWindow *window;
        int fullscreen;
        std::vector<sf::VideoMode> modes;
};

#endif
