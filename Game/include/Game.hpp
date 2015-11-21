#ifndef _GAME_H_
#define _GAME_H_

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

        double getCurrentTime();
};

#endif // _GAME_H_
