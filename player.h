#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
using namespace std;


class player
{
    public:
        player();
        virtual ~player();
            void setname (string n);
            void seticon (char i);
            string getname ();
            char geticon ();
            int getmove();
            void setmove(int m);

    protected:
    private:
        string name;
        char icon;
        int move;

};

#endif // PLAYER_H
