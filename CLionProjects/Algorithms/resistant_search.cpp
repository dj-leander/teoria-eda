#include "resistant_search.h"

bool resistant_search(double x, const vector<double>& v) {
  return resistant_search(x, v, 0, v.size()-1);
}

bool resistant_search(double x, const vector<double>& v, int e, int d) {
  if (e < d) {  // Mientras haya como minimo dos elementos
    int m = (e + d) / 2;
    if (v[m+1] < v[m]) {  // Hemos encontrado el par desordenado

    }
    if (v[m] > x) {
      if (v[m+1] < v[m]) {  // Hemos encontrado el par desordenado

      }
      return resistant_search(x, v, e, m);
    } else if (v[m] < x) {
      return resistant_search(x, v, m + 1, d);
    } else {
      return true;
    }
  } else {
    return false;
  }
}


