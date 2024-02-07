#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// PC decides
char decideComputerTurn() {
    int choice;
    // get the int (idk how this works)
    srand(time(NULL));
    choice = rand() % 3;

    // return value from random int
    if (choice == 0) {
        return 'p';
    }
    else if (choice == 1) {
        return 's';
    }
    return 'r';
}

int gameResults(char playerTurn, char computerTurn) {

    // if its a draw
    if (playerTurn == computerTurn) {
        return 0;
    }

     if (playerTurn == 's' && computerTurn == 'p') { 
        return 1; 
    } 
    if (playerTurn == 's' && computerTurn == 'r') { 
        return -1; 
    } 
    if (playerTurn == 'p' && computerTurn == 'r') { 
        return 1; 
    } 
    if (playerTurn == 'p' && computerTurn == 's') { 
        return -1; 
    } 
    if (playerTurn == 'r' && computerTurn == 'p') { 
        return -1; 
    } 
    if (playerTurn == 'r' && computerTurn == 's') { 
        return 1; 
    } 
      
    return 0; 
}

int main ()
{
    char playerTurn; 
  
    cout << "\n\n\n\t\t Rock Paper Scissor" << endl;
  
    cout << "\n\t\tEnter r for ROCK, p for PAPER, and s "
            "for SCISSOR\n\t\t\t\t\t" << endl; 
  
    // input from the user 
    while(1) { 
        cin >> playerTurn; 
        if (playerTurn == 'p' || playerTurn == 'r' || playerTurn == 's') { 
            break; 
        } 
        else { 
            cout << "\t\t\tInvalid Player Move!!! Please Try Again." << endl; 
        } 
    } 
      
      
  
    // computer move 
    char computerTurn = decideComputerTurn(); 
  
    int result = gameResults(playerTurn, computerTurn); 
  
    // priting result based on who won the game 
    if (result == 0) { 
        cout << "\n\t\t\tGame Draw!\n"; 
    } 
    else if (result == 1) { 
        cout << "\n\t\t\tCongratulations! Player won the "
                "game!\n"; 
    } 
    else { 
        cout << "\n\t\t\tOh! Computer won the game!\n"; 
    } 
  
    // showing both  moves 
    cout << "\t\t\tYour Move: " << playerTurn << endl; 
    cout << "\t\t\tComputer's Move: " << computerTurn << endl; 
  
    return 0; 
}