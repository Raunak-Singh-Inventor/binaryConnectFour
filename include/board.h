#ifndef BOARD_H
#define BOARD_H

#include "matrix.h"

class Board: public Matrix {
public:
    void insertChip (int column, char status);
};

#endif // BOARD_H
