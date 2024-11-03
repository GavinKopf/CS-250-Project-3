#ifndef GUESSEDLETTERS_H
#define GUESSEDLETTERS_H
#include<iostream>
#include<string>
#include<list>

using namespace std;
class GuessedLetters
{
    public:
        GuessedLetters();
        string getLetters();
        void addLetter(char c);

    protected:

    private:
        list<char> m_guessed;
};

#endif // GUESSEDLETTERS_H
