#include "../include/board.h"

void Board::insertChip (int column, char status) {
    // replicate insert chip feature in connect 4
	for(int i = matrix.size()-1; i >= 0; i--) {
		if(matrix[i][column].status=='_') {
			changePointStatus(Point(i, column, status));
			printMatrix();
			return;
		}
	}
}

void Board::detectWin () {
	
}
