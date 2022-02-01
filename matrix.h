#include<vector>

using namespace std;

struct Point {
    char status = '_';
    int col = -1;
    int row = -1;
public:
    Point(int x,int y);
};

class Matrix {
    vector<vector<Point>> matrix;
public:
    Matrix();
    void printMatrix();
};
