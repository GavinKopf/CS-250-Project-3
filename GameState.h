#ifndef GAMESTATE_H
#define GAMESTATE_H
#include<iostream>
#include<list>
using namespace std;
class GameState
{
    public:
        GameState();
        string getState();
        void addState();
        bool gameOver();
    protected:

    private:
        list<string> m_state;
        const string m_allStates [7] = {"PLATFORM", ", HEAD", ", BODY", ", LEFT_ARM", ", RIGHT_ARM", ", LEFT_LEG", ", RIGHT_LEG"};
        int m_nextState = 0;
};

#endif // GAMESTATE_H
