#include "permutacions.h"

// n: volem permutacions del nombres {1,2,...,n}
// A: permutacio parcial (mida n)
// idx: primera casella no omplerta de A
void escriu_permutacions1(int n, VI& A, int idx) {
  if (idx == A.size()) print_vector(A);
  else {
    for (int k = 1; k <= n; ++k) {
      bool usat = false; // Determinem si k ja ha estat usat
      for (int i = 0; i < idx and not usat; ++i)
        usat = (A[i] == k);
      if (not usat) {
        A[idx] = k;
        escriu_permutacions1(n,A,idx+1);
      }
    }
  }
}
