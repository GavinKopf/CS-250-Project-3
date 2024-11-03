#include "Word.h"
#include<iostream>
#include<string>
#include<list>

Word::Word(string s)
{
    m_word = s;
}
string Word::getWord(){
    string w = "";
    for(auto it = m_currentWord.begin(); it != m_currentWord.end(); ++it){
        w+= *it;
        w+= " ";
    }
    return w;
}
void Word::addLetter(char c){
    int i = 0;
    for(list<char>::iterator it = m_currentWord.begin(); it != m_currentWord.end(); ++it){
        if (c == m_word[i]){
            *it = c;
        }
        i++;
    }
}
bool Word::findLetter(char c){
    int i;
    for (i = 0; i < m_word.length(); i++)
        if(m_word[i] == c){
            cout << "True!!!"<< endl;
            return true;
        }
    cout << "False" << endl;
    return false;
}
bool Word::solved(){
    for(auto it = m_currentWord.begin(); it != m_currentWord.end(); ++it)
        if (*it == '_')
            return false;
    return true;
}
