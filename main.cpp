#include <iostream>
#include "board.h"
#include "game.h"
#include "player.h"

using namespace std;

int main()
{
    game Game;
    Game.initialize();
    Game.run();

    return 0;
}
