#ifndef GRAPHALGORITHMS_UTILS_H
#define GRAPHALGORITHMS_UTILS_H

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <math.h>

struct Pos {
    int x;
    int y;
};

using namespace std;

using VI = vector<int>;
using VVI = vector<VI>;

using VB = vector<bool>;
using VVB = vector<VB>;

using VC = vector<char>;
using VVC = vector<VC>;

using LI = list<int>;
using SI = stack<int>;
using QI = queue<int>;
using QP = queue<Pos>;

static int n, m;
static VVI G;
static VB vist;

const VI inc_x = {1, 0, -1, 0};
const VI inc_y = {0, 1, 0, -1};

/* Graf amb pesos */
typedef pair<double, int> WBow; // weighted bow

typedef vector<vector<WBow>> WGraph;

#endif //GRAPHALGORITHMS_UTILS_H
