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


    char response=' ';
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

	cout << "What is your name, young one?: ";
	string player1 = "";
	cin >> player1;
	cout << "What is your name, young two?: ";
	string player2 = "";
	cin >> player2;

    Board board = Board();
	board.printMatrix();

	int column;
	while(true) {
		cout << player1 + ", What column to insert chip?: ";
		cin >> column;
		board.insertChip(column, '0');

		cout << player2 + ", What column to insert chip?: ";
		cin >> column;
		board.insertChip(column, '1');
	}

    return 0;
}
