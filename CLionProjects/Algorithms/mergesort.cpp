#include "mergesort.h"

void mergesort (vector<int>& v) {
  mergesort(v, 0, v.size() - 1);
}

void mergesort (vector<int>& v, int e, int d) {
  if (e<d) {
    // TODO: Porque con una resta no funciona el calculo de m ?
    int m = (d+e) / 2;
    mergesort(v, e, m);
    mergesort(v, m + 1, d);
    merge(v, e, m, d);
  }
}

void merge (vector<int>& v, int e, int m, int d) {
  vector<int> v_aux(d - e + 1);
  int i = e, j = m + 1, k = 0;
  while (i <= m and j <= d) {
    if (v[i] <= v[j]) v_aux[k++] = v[i++];
    else v_aux[k++] = v[j++];
  }
  while (i <= m) v_aux[k++] = v[i++];
  while (j <= d) v_aux[k++] = v[j++];

  for (k = 0; k <= d-e; ++k) v[e + k] = v_aux[k];
}
