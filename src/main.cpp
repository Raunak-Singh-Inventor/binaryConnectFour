#include <iostream>
#include "../include/board.h"

using namespace std;

int main()
{
    cout << "------------------------------------------------------------------" << endl;
    cout << "| Welcome to binaryConnect4!                                     |" << endl;
    cout << "| this is an electronic version of traditional connect4          |" << endl;
    cout << "| instead of red and yellow chips, binaryConnect4 uses 1s and 0s |" << endl;
    cout << "------------------------------------------------------------------" << endl;

    cout << "What is your name, young one?: ";
    string player1 = "";
    cin >> player1;
    cout << "What is your name, young two?: ";
    string player2 = "";
    cin >> player2;

    char response=' ';
    while(true) {
        while(true) {
            cout << "Would you like to start a new game? (y/n): ";
            cin >> response;
            if(response=='y') {
                break;
            } else if(response=='n') {
                cout << "bye this software will stalk you" << endl;
                return 0;
            } else {
                cout << "input 'y' or 'n'" << endl;
            }
        }

        Board board = Board();
        board.printMatrix();

        int column;
        while(true) {
            cout << player1 + ", What column to insert chip?: ";
            cin >> column;
            board.insertChip(column, '0');
            if(board.detectWin('0')==true) {
                cout << player1 + " has won!" << endl;
                break;
            }
            if(board.detectTie()==true) {
                cout << "tie, no one won" << endl;
                break;
            }

            cout << player2 + ", What column to insert chip?: ";
            cin >> column;
            board.insertChip(column, '1');
            if(board.detectWin('1')==true) {
                cout << player2 + " has won!" << endl;
                break;
            }
            if(board.detectTie()==true) {
                cout << "tie, no one won" << endl;
                break;
            }
        }
    }
    return 0;
}
