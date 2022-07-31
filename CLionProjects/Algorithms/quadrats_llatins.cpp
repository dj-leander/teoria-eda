#include "quadrats_llatins.h"

// Troba tots els quadrats llatins completant des de (i, j)
void quadrats_llatins(VVI& q, VVB& f, VVB& c, int i, int j, const int& n) {
  if (i == n) return print_matrix(q);
  if (j == n) return quadrats_llatins(q, f, c, i+1, 0, n);
  for (int v = 0; v < n; ++v) {
    if (not f[i][v] and not c[j][v]) {
      f[i][v] = c[j][v] = true;
      q[i][j] = v;
      quadrats_llatins(q, f, c, i, j+1, n);
      f[i][v] = c[j][v] = false;
    }
  }
}

void quadrats_llatins(const int& n) {
  VVI q(n, VI(n));
  VVB f(n, VB(n, false));
  VVB c(n, VB(n, false));
  quadrats_llatins(q, f, c, 0, 0, n);
}
