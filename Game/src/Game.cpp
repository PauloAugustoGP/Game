#include "../include/Game.hpp"

#define MS_PER_UPDATE 60

Game::Game()
{
    this->previous = getCurrentTime();
    this->lag = 0.0;
    this->current = 0.0;
    this->elapsed = 0.0;
}

Game::~Game(){}

void Game::run()
{
    this->previous = getCurrentTime();
    this->lag = 0.0;

    while( true )
    {
        this->current = getCurrentTime();
        this->elapsed = this->current - this->previous;
        this->previous = this->current;
        this->lag += this->elapsed;

        //processInput();

        while( lag >= MS_PER_UPDATE )
        {
            //update();
            lag -= MS_PER_UPDATE;
        }

        //render();
    }
}

double Game::getCurrentTime()
{
    return 0.0;
}
