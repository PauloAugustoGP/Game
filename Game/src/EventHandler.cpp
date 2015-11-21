#include "../include/EventHandler.hpp"

EventHandler::EventHandler()
{
    //ctor
}

EventHandler::~EventHandler()
{
    //dtor
}

int EventHandler::checkEvent()
{
    SDL_Event event;

    if( SDL_PollEvent(&event) )
    {
        /* an event was found */
        switch( event.type )
        {
            /* close button clicked */
            case SDL_QUIT:
            {
                return -1;
            }break;

            /* handle the keyboard */
            case SDL_KEYDOWN:
            {
                switch( event.key.keysym.sym )
                {
                    case SDLK_ESCAPE:
                    {
                        return -1;
                    }break;
                }
            }break;
        }
    }

    return 0;
}
