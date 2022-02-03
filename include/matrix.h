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
    vector<vector<Point>> matrix;
public:
    Matrix();
    void printMatrix();
    vector<vector<Point>> getMatrix();
protected:
	void changePointStatus(Point point);
};

#endif // MATRIX_H
