#include <iostream>
#include <vector>
#include "hangmanFunctions.h"

using namespace std;

void greet()
{
    cout << "==========" << endl; 
    cout << "Hangman Game" << endl;
    cout << "==========" << endl; 
    cout << "How to play: Guess the word by picking letters to see if theyre included until you can deduce the correct word." << endl;
}

void displayIncorrectLetters(int wrongLetters)
{
    if(wrongLetters==0){
        
            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==1) {
        
            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==2) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==3) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==4) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==5) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==6) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==7) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==8) {

            cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    } else if (wrongLetters==9) {

    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";

    }
}

void letterStatus(vector<char> incorrect, string answer)
{
    cout <<"Incorrect Guesses: \n";

    for(int i = 0; i<incorrect.size(); i++) {
        cout <<incorrect[i]<<" ";
    }

    cout <<"\nCodeWord\n";

    for(int i = 0; i<answer.length(); i++) {
        cout<<answer[i]<<" ";
    }
}

void endGame(string answer, string codeword)
{
    if (answer==codeword) {
        cout<<"\nYou Win!" << endl;
        cout<< "The Word was: \n" << endl;
        cout<<(codeword);
    } else {
        cout<<"You Lose!" << endl;
    }
}