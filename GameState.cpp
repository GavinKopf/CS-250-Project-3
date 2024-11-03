#include "GameState.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;
GameState::GameState()
{
    //ctor
}
string GameState::getState(){
    string w = "";
    for(auto it = m_state.begin(); it != m_state.end(); ++it){
        w+= *it;
    }
    return w;
}
void GameState::addState(){
    cout << "1" << endl;
    m_state.push_back(m_allStates[m_nextState]);
    m_nextState++;
    cout << "I've added a state" << endl;
}
bool GameState::gameOver(){
    if (m_nextState == 7)
        return true;
    return false;
}
