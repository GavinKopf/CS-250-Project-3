#include "GuessedLetters.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;
GuessedLetters::GuessedLetters()
{
    //ctor
}
string GuessedLetters::getLetters(){
    string str(m_guessed.begin(), m_guessed.end());
    return  str;
}
void GuessedLetters::addLetter(char c){
    m_guessed.push_back(c);
}
