#ifndef _EVENTHANDLER_H_
#define _EVENTHANDLER_H_

#include "SDL/SDL.h"
#include "SDL/SDL_events.h"

#include <stdio.h>

class EventHandler
{
    public:
        EventHandler();
        virtual ~EventHandler();
        int checkEvent();

    private:

};

#endif // _EVENTHANDLER_H_
