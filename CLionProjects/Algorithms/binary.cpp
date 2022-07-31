#include "binary.h"

// i es la seguent posicio del vector A que assignarem
void binari(vector<int>& A, int i) {
  if (i == A.size()) print_vector(A);
  // cas base
  else {
  // cas inductiu
  A[i] = 0; binari(A,i+1);
  A[i] = 1; binari(A,i+1);
  }
}

void binari(int n) {
  vector<int> A(n);
  binari(A,0);
}