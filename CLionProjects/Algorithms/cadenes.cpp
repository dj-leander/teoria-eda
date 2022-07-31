#include "cadenes.h"

// A: cadena parcial (mida n)
// idx: primera casella no omplerta de A
// k: nombre total d’1s que volem
void cadenes(vector<int>& A, int idx, int k) {
  if (idx == A.size()) {
    int c = 0;
    for (int x : A) c += x; // Compto els 1s
    if (c == k) print_vector(A);
  }
  else {
    A[idx] = 0; cadenes(A,idx+1,k);
    A[idx] = 1; cadenes(A,idx+1,k);
  }
}

// A: cadena parcial (mida n)
// idx: primera casella no omplerta de A
// k: nombre total d’1s que volem
// u: nombre d'1s posats fins ara
void cadenes1(vector<int>& A, int idx, int k, int u) {
  if (idx == A.size()) {
    if (u == k) print_vector(A);
  }
  else {
    A[idx] = 0; cadenes1(A,idx+1,k, u);
    A[idx] = 1; cadenes1(A,idx+1,k, u+1);
  }
}

// A: cadena parcial (mida n)
// idx: primera casella no omplerta de A
// k: nombre total d’1s que volem
// u: nombre d'1s posats fins ara
// z: nombre d'0s posats fins ara
void cadenes2(vector<int>& A, int idx, int k, int u, int z) {
  if (idx == A.size()) {
    print_vector(A);
  }
  else {
    if (z < int(A.size()) - k) {  // Nos falta por poner ceros
      A[idx] = 0; cadenes2(A, idx+1, k, u, z+1);
    }

    if (u < k) {
      A[idx] = 1; cadenes2(A, idx+1, k, u+1, z);
    }
  }
}

void cadenes(int n) {
  VI A(n);
  srand(time(NULL));
  int k = rand() % n + 1;
  cout << "Cadenes: " << endl;
  cadenes(A, 0, k);
}

void cadenes1(int n) {
  VI A(n);
  srand(time(NULL));
  int k = rand() % n + 1;
  cout << "Cadenes1: " << endl;
  cadenes1(A, 0, k, 0);
}

void cadenes2(int n) {
  VI A(n);
  srand(time(NULL));
  int k = rand() % n + 1;
  cout << "Cadenes2: " << endl;
  cadenes2(A, 0, k, 0, 0);
}
