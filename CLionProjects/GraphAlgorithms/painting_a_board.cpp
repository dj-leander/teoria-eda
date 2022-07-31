//
// Created by zoe on 5/10/22.
//

#include "painting_a_board.h"

void paint_board() {

}

void painting_main(VVC& GC) {
  while (cin >> n >> m) {
    GC = VVC(n, VC(m, ' '));
    for (int i = 0; i < n; ++i)
      for (char& c: GC[i])
        cin >> c;
    paint_board();
  }
}
