#ifndef GRAPHALGORITHMS_TREASURE_GRAPH_H
#define GRAPHALGORITHMS_TREASURE_GRAPH_H
#include "utils.h"

bool dfs_find_treasure(const VVC& GC, VVB& vist, const int& n, const int& m, int x, int y);

int dfs_count_treasure(VVC& GC, const int& n, const int& m, int x, int y);

void main_find_treasures();

#endif //GRAPHALGORITHMS_TREASURE_GRAPH_H
