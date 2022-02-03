#include "../include/matrix.h"

using namespace std;

Point::Point (int row, int col) {
    this->row = row;
    this->col = col;
}

Point::Point (int row, int col, char status) {
    this->row = row;
    this->col = col;
    this->status = status;
}

Matrix::Matrix () {
    // create 6 rows * 7 columns matrix
    for(int i = 0; i < 6; i++) {
        vector<Point> row = {};
        for(int j = 0; j < 7; j++) {
            row.push_back(Point(i,j));
        }
        matrix.push_back(row);
    }
}

void Matrix::printMatrix () {
    // print the matrix for user
    for(int i = 0; i < (int) matrix.size(); i++) {
        for(int j = 0; j < (int) matrix[i].size(); j++) {
            cout << "|" << matrix[i][j].status<< "|";
        }
		cout << endl;
    }
	cout << "|0||1||2||3||4||5||6|" << endl;
}

void Matrix::changePointStatus (Point point) {
    matrix[point.row][point.col] = point;
}
