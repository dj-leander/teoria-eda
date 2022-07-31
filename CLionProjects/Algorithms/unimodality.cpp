#include "unimodality.h"

/* Funcion auxiliar. */
int unimodality(const vector<int>& v) {
  return unimodality(v, 0, v.size()-1);
}

int unimodality(const vector<int>& v, int e, int d) {
  /*
   *  Busca el elemento cima de una secuencia. Un elemento
   *  cima tiene a ambos lados secuencias en orden decreciente.
   *  Siendo ambas menores que el de la cima.
   */
  if (e+d >= 2) { // Si hay al menos tres elementos entre e y d
    int m = (e+d)/2;
    if (v[m-1] > v[m]) {  // Al lado izquierdo está la cima
      return unimodality(v, e, m-1);
    }
    if (v[m+1] > v[m]) {  // Al lado derecho está la cima
      return unimodality(v, m+1, d);
    }
    // Si ninguno de los lados está más alto, es porque estamos en la cima
    return v[m];
  }
  return -1;
}
