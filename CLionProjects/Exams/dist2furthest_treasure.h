#ifndef EXAMS_DIST2FURTHEST_TREASURE_H
#define EXAMS_DIST2FURTHEST_TREASURE_H

#include "utils.h"

void dist2furthest_treasure(const VVC& map, VVI& dist, Pos& start);

bool pos_ok(const VVC& map, const Pos& p);

#endif //EXAMS_DIST2FURTHEST_TREASURE_H
