#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Point {
    int row = -1;
    int col = -1;
    char status = '_';
public:
    Point(int row,int col);
    Point(int row, int col, char status);
};

class Matrix {
protected:
	vector<vector<Point>> matrix;
	void changePointStatus(Point point);
public:
    Matrix();
    void printMatrix();
};

#endif // MATRIX_H
