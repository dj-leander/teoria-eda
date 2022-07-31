#include "binary_search.h"

int binary_search(int x, const vector<int>& v) {
  return binary_search(x, v, 0, v.size()-1);
}

int binary_search(int x, const vector<int>& v, int left, int right) {
  if (left <= right) {
    int m = (right+left)/2;
    if (v[m] > x) // examinamos la parte izquierda
      return binary_search(x, v, left, m);
    else if (v[m] < x) // examinamos la parte derecha
      return binary_search(x, v, m+1, right);
    else
      return m; // hemos encontrado la posicion de x
  } else
    return -1;
}
