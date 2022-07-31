#ifndef GRAPHALGORITHMS_TREASURES_MAP_H
#define GRAPHALGORITHMS_TREASURES_MAP_H

#include "utils.h"
#include "graphIOchar.h"

void dist_nearest_treasure_ite(const VVC& GC, VVI& dist, Pos& start);

void dist_furthest_treasure_ite(const VVC& GC, VVI& dist, Pos& start);

bool pos_ok(const VVC& GC, const Pos& p);

#endif //GRAPHALGORITHMS_TREASURES_MAP_H
