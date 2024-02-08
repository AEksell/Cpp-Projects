#include <iostream>
#include <vector>
#include <cmath>
#include <list>
#include <time.h>
#include "hangmanFunctions.cpp"
#include <stdlib.h>

using namespace std;

    // DECIDES THE WORD TO BE USED IN HANGMAN
    string selectCodeword() 
    {
        vector<string> words = {"password", "action", "bite", "awesome"};

        srand(static_cast<unsigned int>(time(nullptr)));
        return words[rand() % words.size()];
    }

    string getAnswer(const string& word) 
    {
        return string(word.length(), '*');
    }

int main(){

    // gives a little introduction to the program
    greet();

    // The word that was selected and the length of it
    string codeword = selectCodeword();
    string answer = getAnswer(codeword);


    // stores the incorrect letters youve picked
    int wrongLetters = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;


    while(answer != codeword && wrongLetters < 10)
    {
        displayIncorrectLetters(wrongLetters);
        letterStatus(incorrect, answer);

        cout<<"\n\nPick a letter: ";
        cin>>letter;

        for (int i = 0; i<codeword.length(); i++)
        {
            if (letter==codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess) {
            cout<<"\nCorrect\n";
        } else {
            cout<<"\nIncorrect\n";
            incorrect.push_back(letter);
            wrongLetters++;
        }
        
        guess = false;

    }

    endGame(answer, codeword);
    return 0;
}