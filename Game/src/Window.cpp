#include "../include/Window.hpp"

Window::Window()
{
    this->window = SDL_SetVideoMode( 640, 480, 0, 0 );
}

Window::~Window()
{
    SDL_FreeSurface( this->window );
}

void Window::update()
{
    SDL_UpdateRect( this->window, 0, 0, 0, 0 );
}
