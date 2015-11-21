#include "../include/Game.hpp"

Game::Game()
{
    this->previous = getCurrentTime();
    this->lag = 0.0;
    this->current = 0.0;
    this->elapsed = 0.0;

    this->window = new Window();
    this->event = new EventHandler();
}

Game::~Game()
{
    delete this->window;
    delete this->event;
}

void Game::run()
{
    this->previous = getCurrentTime();
    this->lag = 0.0;

    int endGame = 0;
    while( endGame != -1 )
    {
        this->current = getCurrentTime();
        this->elapsed = this->current - this->previous;
        this->previous = this->current;
        this->lag += this->elapsed;

        endGame = this->event->checkEvent();

        while( lag >= MS_PER_UPDATE )
        {
            update();
            lag -= MS_PER_UPDATE;
        }

        //render();
    }
}

void Game::update()
{
    this->window->update();
}

double Game::getCurrentTime()
{
    return 0.0;
}
