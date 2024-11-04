#include "word.h"
#include<iostream>
#include<string>
#include<list>
#include <cstdlib>
#include <ctime>
using namespace std;
Word::Word(string s){
    m_word = s;
    m_currentWord.assign(m_word.length(), '_');
}
string Word::getFinalWord(){
    return m_word;
}
string Word::getWord(){
    string w = "";
    for(auto it = m_currentWord.begin(); it != m_currentWord.end(); ++it){
        w+= *it;
        w+= " ";
    }
    return w;
}
void Word::setWord(string s){
    m_word = s;
    m_currentWord.assign(s.length(), '_');
}
void Word::addLetter(char c){
    int i = 0;
    for(auto it = m_currentWord.begin(); it != m_currentWord.end(); ++it){
        if (c == toupper(m_word[i])){
            *it = c;
        }
        i++;
    }
}
void Word::randomWord(){
    srand(time(0));
    int i = rand()%110;
    m_word = m_randomWords[i];
    m_currentWord.assign(m_word.length(), '_');
}
bool Word::findLetter(char c){
    int i;
    tolower(c);
    for (i = 0; i < m_word.length(); i++){
        if(toupper(m_word[i]) == c){
            return true;
        }
    }
    return false;
}
bool Word::solved(){
    for(auto it = m_currentWord.begin(); it != m_currentWord.end(); ++it)
        if (*it == '_')
            return false;
    return true;
}
