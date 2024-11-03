#include<list>
#include<iostream>
#include<string>


#ifndef WORD_H
#define WORD_H
using namespace std;

class Word
{
    public:
        Word(string);
        string getWord();
        void addLetter(char);
        bool findLetter(char);
        bool solved();
    private:
        string m_word;
        list<char> m_currentWord = {'_','_','_','_','_','_'};
};

#endif // WORD_H
