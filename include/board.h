#ifndef BOARD_H
#define BOARD_H

#include "matrix.h"

class Board: public Matrix {
public:
    void insertChip (int column, char status);
	bool detectWin(char checkStatus);
	bool detectTie();
};

#endif // BOARD_H
