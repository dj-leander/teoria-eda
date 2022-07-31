#ifndef EXAMS_PEACEFUL_KINGS_H
#define EXAMS_PEACEFUL_KINGS_H

#include "utils.h"

const int inc_size = 8;
const VI kings_inc_x = {1, 1, 0, -1, -1, -1, 0, 1};
const VI kings_inc_y = {0, 1, 1, 1, 0, -1, -1, -1};

void peaceful_kings(VVC& board, Pos start, const int& n);

void peaceful_kings(int n, int k);

void print_kings_board(const VVC& board, const int& n);

bool board_full_printed(const int& kings, const int& n);

#endif //EXAMS_PEACEFUL_KINGS_H
