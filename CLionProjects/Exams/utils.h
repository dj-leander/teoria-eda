#ifndef EXAMS_UTILS_H
#define EXAMS_UTILS_H

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#include "Pos.h"

using VC = vector<char>;
using VVC = vector<VC>;

using VI = vector<int>;
using VVI = vector<VI>;

using VB = vector<bool>;
using VVB = vector<VB>;

using QI = queue<int>;

using QP = queue<Pos>;

const VI inc_x = {1, 0, -1, 0};
const VI inc_y = {0, 1, 0, -1};

bool pos_ok(const Pos& p, const int& limit_x, const int& limit_y);

template<typename T>
void print_vector(const vector<T>& v) {
  cout << "[ ";
  for (int e : v)
    cout << e << " ";

  cout << "]" << endl;
}

template<typename  T>
void print_matrix(const vector<vector<T>>& m) {
  cout << endl;
  for (int i = 0; i < m.size(); ++i) {
    cout << "[" << i << "] -> ";
    print_vector(m[i]);
  }
  cout << endl;
}

#endif //EXAMS_UTILS_H
