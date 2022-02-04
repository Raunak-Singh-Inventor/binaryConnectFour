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

bool Board::detectWin (char checkStatus) {
	// detect if a win occurred horizontally
	int counter = 0;
	for(int i = 0; i < matrix.size(); i++) { // row
        for(int j = 0; j < matrix[i].size(); j++) { //col
            if(matrix[i][j].status==checkStatus) {
                counter++;
            }
            else {
                counter = 0;
            }
            if(counter==4) {
                return true;
            }
        }
        counter = 0;
	}
	// detect if win occurred vertically
	for(int j = 0; j < matrix[0].size(); j++) { // col
        for(int i = 0; i < matrix.size(); i++) { // row
            // std::cout << matrix[i][j].status;
            // std::cout << " at row " << i << " col " << j << std::endl;
            if(matrix[i][j].status==checkStatus) {
                counter++;
            } else {
                counter = 0;
            }
            if(counter==4) {
                return true;
            }
        }
        counter = 0;
	}

	// detect if win occurred diagonally
	for(int i = 0; i < matrix.size(); i++) { // row
        for(int j = 0; j < matrix[i].size(); j++) { //col
            if(matrix[i][j].status==checkStatus) {
                int row = i;
                int col = j;
                int counter = 1;
                while(true) {
                    if(i-1>0 && j-1>0) {
                        if(row>0 && col>0) {
                            if(matrix[row-1][col-1].status==checkStatus) {
                                counter++;
                                // std::cout << "row: " << row << " col: " << col << " up 1 left 1 counter: " << counter << std::endl;
                            } else {
                                break;
                            }
                            if(counter==4) {
                                return true;
                            }
                            row--;
                            col--;
                        } else {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                row = i;
                col = j;
                counter = 1;
                while(true) {
                    if(i+1<matrix.size() && j-1>0) {
                        if(row < matrix.size() && col > 0) {
                            if(matrix[row][col].status==checkStatus) {
                                counter++;
                                // std::cout << "row: " << row << " col: " << col << " down 1 left 1 counter: " << counter << std::endl;
                            } else {
                                break;
                            }
                            if(counter==4) {
                                return true;
                            }
                            row++;
                            col--;
                        } else {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            }
        }
    }

	return false;
}
