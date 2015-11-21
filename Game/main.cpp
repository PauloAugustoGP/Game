#include "include\Game.hpp"
#include "SDL/SDL.h"

int main( int argc, char *argv[] )
{
    Game *game;

    game = new Game();

    /** init SDL **/
    SDL_Init( SDL_INIT_VIDEO );
    SDL_WM_SetCaption( "Game", "SDL Test" );

    game->run();

    /** Clean SDL **/
    SDL_Quit();
    delete game;

    return 0;
}
