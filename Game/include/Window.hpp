#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "SDL/SDL.h"

class Window
{
    public:
        Window();
        virtual ~Window();

    private:
        SDL_Surface *window;

};

#endif // _WINDOW_H_
