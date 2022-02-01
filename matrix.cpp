#include <iostream>
#include <vector>
#include "matrix.h"

using namespace std;

Point::Point (int x, int y) {
    col = x;
    row = y;
}

Matrix::Matrix () {
    // create 7 columns * 6 rows matrix
    for(int i = 0; i < 7; i++) {
        vector<Point> column = {};
        for(int j = 0; j < 6; j++) {
            column.push_back(Point(i,j));
        }
        matrix.push_back(column);
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
}
