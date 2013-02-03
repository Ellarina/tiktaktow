#include "game.h"
#include "board.h"
#include "player.h"

game::game()
{
    //ctor
}

game::~game()
{
    //dtor
}
void game::initialize ()
{
    cout<<"initializing..."<<endl;
    m_board.initialize();
    m_p1.setname("player1");
    m_p1.seticon('O');
    m_p2.setname("player2");
    m_p2.seticon('X');
    m_currentPlayer = &m_p1;
}
void game::update ()
{
    cout<<"\nupdating...";
    m_board.update(m_currentPlayer->getmove(), m_currentPlayer->geticon());
    m_isComplete = checkwin();
    switchplayer();
}
void game::render ()
{
    cout<<"rendering...\n"<<endl;
    m_board.render();
    cout << "It is the turn of " << m_currentPlayer->getname();
}
bool game::checkwin ()
{
    m_board.checkwin();
}
void game::switchplayer()
{
    if (m_currentPlayer == &m_p1)
        m_currentPlayer = &m_p2;
    else if (m_currentPlayer == &m_p2)
        m_currentPlayer = &m_p1;
}
void game::run()
{
    while(!m_isComplete)
    {
        render();
        update();
    }
}

