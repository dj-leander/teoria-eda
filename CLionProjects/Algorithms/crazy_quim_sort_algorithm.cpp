#include "crazy_quim_sort_algorithm.h"
#include "utils.h"

/* Funcion auxiliar. */
void quim_sort(vector<int>& v) {
  quim_sort(v, 0, v.size()-1);
}

/* Pre: v tiene que ser un vector con longitud multiple de 3
 */
void quim_sort(vector<int>& v, int e, int d) {
  int n = d-e+1;  // nombre de elementos a ordenar
  if (n == 2) { // un solo elemento esta ordenado por definicion
    if (v[e] > v[d]) {  // ordenamos crecientemente
      int temp = v[e];
      v[e] = v[d];
      v[d] = temp;
    }
  } else if (n >= 3) {
      int k = e + n/3;
      int l = d - n/3;
      quim_sort(v, e, l); // ordenamos los primeros elementos del vector, 2/3(v.size())
      quim_sort(v, k, d); // ordenamos las ultimas 2/3 partes del vector
      quim_sort(v, e, l);
  }

}
