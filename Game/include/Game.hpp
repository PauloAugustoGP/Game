#ifndef _GAME_H_
#define _GAME_H_

#include "Window.hpp"

#define MS_PER_UPDATE 60

class Game
{
    public:
        Game();
        virtual ~Game();
        void run();

    private:
        double previous;
        double lag;
        double current;
        double elapsed;

        Window *window;

        double getCurrentTime();
        void update();
};

#endif // _GAME_H_
