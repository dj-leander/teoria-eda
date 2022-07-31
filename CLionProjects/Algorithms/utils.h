#ifndef ALGORITHMS_UTILS_H
#define ALGORITHMS_UTILS_H

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

using VI = vector<int>;
using VVI = vector<VI>;

using VB = vector<bool>;
using VVB = vector<VB>;

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

#endif //ALGORITHMS_UTILS_H
