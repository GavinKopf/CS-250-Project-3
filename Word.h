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
        void randomWord();
        void setWord(string);
        string getWord();
        string getFinalWord();
        void addLetter(char);
        bool findLetter(char);
        bool solved();
    private:
        string m_word;
        list<char> m_currentWord;
        string m_randomWords[110] = {
            "apple", "banana", "orange", "grape", "pear",
            "lemon", "lime", "watermelon", "strawberry", "blueberry",
            "raspberry", "cherry", "mango", "kiwi", "pineapple",
            "avocado", "coconut", "peach", "plum", "fig",
            "melon", "apricot", "guava", "papaya", "dragonfruit",
            "cat", "dog", "bird", "fish", "horse",
            "cow", "pig", "sheep", "goat", "chicken",
            "duck", "goose", "turkey", "eagle", "hawk",
            "owl", "dove", "pigeon", "swan", "parrot",
            "car", "truck", "bus", "train", "plane",
            "ship", "boat", "bike", "motorcycle", "scooter",
            "house", "apartment", "castle", "cottage", "mansion",
            "school", "hospital", "library", "museum", "park",
            "beach", "mountain", "river", "lake", "forest",
            "desert", "jungle", "ocean", "island", "volcano",
            "sun", "moon", "star", "cloud", "rain",
            "snow", "wind", "thunder", "lightning", "rainbow",
            "red", "green", "blue", "yellow", "purple",
            "orange", "pink", "brown", "black", "white",
            "happy", "sad", "angry", "excited", "calm",
            "hungry", "thirsty", "tired", "sleepy", "bored",
            "smart", "funny", "kind", "brave", "strong",
};
};

#endif // WORD_H
