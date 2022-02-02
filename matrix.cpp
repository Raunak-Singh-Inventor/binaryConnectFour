#include "matrix.h"

using namespace std;

Point::Point (int x, int y) {
    col = x;
    row = y;
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
}

void Matrix::changePointStatus (Point point, string newStatus) {
	
}
