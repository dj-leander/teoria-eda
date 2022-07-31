#include "peaceful_kings.h"

bool legal(const VVC& board, int i, int j, const int& n) {
  for (int k = 0; k < int(kings_inc_x.size()); ++k) {
    Pos next(i+inc_x[k], j+inc_y[k]);
    if (pos_ok(next, n, n)) {
      if (board[i][j] == board[next.x][next.y])
        return false;
    }
  }
  return true;
}

void peaceful_kings(VVC& board, int i, int j, const int& n) {
  if (i == n) print_matrix(board);
  else {
    for (int k = j; k < n; ++k) {
      
    }
  }
}

void peaceful_kings(int n, int k) {
  VVC board(n, VC(n, '.'));
  peaceful_kings(board, 0, 0, n);
}

