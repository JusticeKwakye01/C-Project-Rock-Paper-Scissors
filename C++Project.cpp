#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char playAgain = 'y';
    
    while (playAgain == 'y' || playAgain == 'Y') {
        char game;
        
        cout << "Enter R(For Rock), P(For paper) and S(For Scissors)" << endl << endl;
        cout << "Rock, Paper, Or Scissors: ";
        cin >> game;

        int computerChoice = rand() % 3;

        cout << "Computer chose: ";
        
        switch (computerChoice) {
            case 0:
                cout << "Rock" << endl;
                break;
            case 1:
                cout << "Paper" << endl;
                break;
            case 2:
                cout << "Scissors" << endl;
                break;
        }

        switch (game) {
            case 'R':
                if (computerChoice == 0) {
                    cout << "It's a tie!";
                } else if (computerChoice == 1) {
                    cout << "Computer wins!";
                } else {
                    cout << "You win!";
                }
                break;

            case 'P':
                if (computerChoice == 0) {
                    cout << "You win!";
                } else if (computerChoice == 1) {
                    cout << "It's a tie!";
                } else {
                    cout << "Computer wins!";
                }
                break;

            case 'S':
                if (computerChoice == 0) {
                    cout << "Computer wins!";
                } else if (computerChoice == 1) {
                    cout << "You win!";
                } else {
                    cout << "It's a tie!";
                }
                break;

            default:
                cout << "Wrong input please try again" << endl;
        }
        
        cout << endl;
        
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}

