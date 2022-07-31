#ifndef ALGORITHMS_CADENES_H
#define ALGORITHMS_CADENES_H

#include "utils.h"

// Els tres mètodes són una millora del previ cadenes.
// El que fan és mostrar cadenes amb n digits amb k uns.

void cadenes(vector<int>& A, int idx, int k);

void cadenes1(vector<int>& A, int idx, int k, int u);

void cadenes2(vector<int>& A, int idx, int k, int u, int z);

void cadenes(int n);

void cadenes1(int n);

void cadenes2(int n);

#endif //ALGORITHMS_CADENES_H
