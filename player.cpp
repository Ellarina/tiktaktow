#include "player.h"
#include "board.h"
#include "game.h"

player::player()
{
    //ctor
}

player::~player()
{
    //dtor
}
void player::setname (string n)
{
    name = n;
}
void player::seticon (char i)
{
    icon = i;
}
void player::setmove(int m)
{
    move = m;
}
string player::getname ()
{
    return name;
}
char player::geticon ()
{
    return icon;
}
int player::getmove()
{
    return move;
}

