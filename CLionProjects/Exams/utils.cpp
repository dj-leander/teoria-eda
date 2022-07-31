#include "utils.h"

bool pos_ok(const Pos& p, const int& limit_x, const int& limit_y) {
  return p.x >= 0 and p.x < limit_x and p.y >= 0 and p.y < limit_y;
}
