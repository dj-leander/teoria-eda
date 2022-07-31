#include "exponentiation.h"

int exponentiation(const int& n, int k) {
  if (k == 0) // Cas base
    return 1;
  else {  // Cas recursiu
    int y = exponentiation(n, k/2);
    if (k % 2 == 0) { // Si k es par
      return y * y;
    }
    return n*y*y;
  }
}