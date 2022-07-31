#include "salts_cavall.h"


bool es_pot(VVI& t, int i, int j, int s, const int& n) {
  if (i >= 0 and i < n and j >= 0 and j < n and t[i][j] == -1){
    t[i][j] = s;
    if (s == n*n-1 or
        es_pot(t, i+2, j-1, s+1, n) or es_pot(t, i+2, j+1, s+1, n) or
        es_pot(t, i+1, j+2, s+1, n) or es_pot(t, i-1, j+2, s+1, n) or
        es_pot(t, i-2, j+1, s+1, n) or es_pot(t, i-2, j-1, s+1, n) or
        es_pot(t, i-1, j-2, s+1, n) or es_pot(t, i+1, j-2, s+1, n))
      return true;
    t[i][j] = -1;
  }
  return false;
}