#include "n_reines.h"

bool legal(VI& t, int i) {
  for (int k = 0; k < i; ++k)
    if (t[k] == t[i] or
        t[k] - k == t[i] - i or
        t[k] + k == t[i] + i)
      return false;
  return true;
}

void escriu(VI& t, const int& n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j)
      cout << (t[i] == j ? "Q" : ".");
    cout << endl;
  }
  cout << endl;
}

void reines(VI& t, int i, const int& n) {
  if (i == n) escriu(t, n);
  else
    for (int j = 0; j < n; ++j){ //j es col per reina de fila i
      t[i] = j;
      if (legal(t, i))
        reines(t, i+1, n);
    }
}

void reines(int n) {
  VI t(n);
  reines(t, 0, n);
}
