#include <iostream>
#include <cctype>
#include "Word.h"
#include "guessedLetters.h"
#include "gameState.h"
using namespace std;

int main()
{
    char ans;
    string w;
    do{
    cout << "Enter the word, or press \"R\" to get a random word: ";
    cin >> w;
    Word word(w);
    if(toupper(w[0]) == 'R' && w.length() == 1)
        word.randomWord();
    GuessedLetters guessed = GuessedLetters();
    GameState state = GameState();
    char letter;

    do {
       cout << "Game state: " << state.getState() << endl;
       cout << "Guessed letters: " << guessed.getLetters() << endl;
       cout << "Guess this word: " << word.getWord() << endl << endl;
       cout << "Guess a letter: ";
       cin >> letter;
       letter = toupper(letter);
       if (word.findLetter(letter)) {
          word.addLetter(letter);
       }
       else {
          guessed.addLetter(letter);
          state.addState();
       }
    } while ( (!state.gameOver()) && (!word.solved()) );

    if (state.gameOver()) {
       cout << endl << "Game state: " << state.getState() << endl;
       cout << "Sorry you lose"  << endl;
       cout << "The word was: " << word.getFinalWord() << endl;
    }
    else {
        cout << endl << "Congratulations, you guessed the word: " <<  word.getWord() << endl;
    }

    cout << "Press Y if you'd like to go again:/n "
         << "Press anything else if you'd like to quit:/n ";
    cin >> ans;

    }while(toupper(ans) == 'Y');
    return 0;
}
