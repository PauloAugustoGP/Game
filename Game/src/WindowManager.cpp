#include "../include/WindowManager.hpp"

using namespace sf;

WindowManager::WindowManager()
{
    this->window = new RenderWindow();

    this->fullscreen = 0;
    this->modes = VideoMode::getFullscreenModes();

    this->window->setFramerateLimit(60);
    this->window->setVerticalSyncEnabled(true);

    createWindow();
}

WindowManager::~WindowManager()
{
    delete this->window;
}

void WindowManager::createWindow()
{
    if( this->fullscreen == 0 )
        this->window->create( VideoMode(this->modes[0].width, this->modes[0].height), "Game", Style::Default );
    else
        this->window->create( VideoMode(this->modes[0].width, this->modes[0].height), "Game", Style::Fullscreen );
}

void WindowManager::updateWindow()
{
    if( this->fullscreen == 0 )
        this->fullscreen = 1;
    else
        this->fullscreen = 0;

    createWindow();
}

RenderWindow* WindowManager::getWindow()
{
    return this->window;
}
