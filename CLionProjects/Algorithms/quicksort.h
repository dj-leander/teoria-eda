#ifndef ALGORITHMS_QUICKSORT_H
#define ALGORITHMS_QUICKSORT_H
#include "utils.h"

template <typename elem>
int partition (vector<elem>& T, int e, int d) {
  elem x = T[e];
  int i = e - 1;
  int j = d + 1;
  for (;;) {
    while (x < T[--j]);
    while (T[++i] < x); // se compara x con t[i] siendo x == t[i]
    if (i >= j) return j;
    swap(T[i], T[j]);
  } }

template <typename elem>
void quicksort(vector<elem>& T, int e, int d) {
  if (e < d) {
    int q = partition(T, e, d);
    quicksort(T, e, q);
    quicksort(T, q + 1, d);
  } }

template <typename elem>
void quicksort(vector<elem>& T) {
  quicksort(T, 0, T.size() - 1);
}
#endif //ALGORITHMS_QUICKSORT_H
