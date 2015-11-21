#include "include\Game.hpp"
#include "SDL/SDL.h"

int main( int argc, char *argv[] )
{
    Game *game;

    game = new Game();

    SDL_Init(SDL_INIT_VIDEO);
    SDL_WM_SetCaption("Game", "SDL Test");

    game->run();

    delete game;

    return 0;
}
