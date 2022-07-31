#ifndef EXAMS_POS_H
#define EXAMS_POS_H

#include "utils.h"

struct Pos {
  int x, y;

  /**
   * Default constructor. (0, 0)
   */
  inline Pos(): x(0), y(0) {}

  /**
   * Given constructor.
   */
  inline Pos(int x, int y): x(x), y(y) {}

  /**
   * Read operator.
   */
   inline friend istream& operator >> (istream& is, Pos& pos) {
     return is >> pos.x >> pos.y;
   }

  /**
   * Print operator.
   */
  inline friend ostream& operator<< (ostream& os, const Pos& pos) {
    return os << "(" << pos.x << ", " << pos.y << ")";
  }
};


#endif //EXAMS_POS_H
