//
// Created by zoe on 5/10/22.
//

#include "bfs.h"

/*
 *  Calcula la distancia del vértice 0 a todos los demás.
 *  Además, también guarda el orden de visita de los mismos.
 *  Devuelve:
 *    L: lista con el orden de visita de los vértices.
 */
VI bfs_ite(const VVI& G, LI& L, VI& prev) {
  int n = int(G.size());
  VI dist(n, INT32_MAX);  // Un vector de pares para guardar el vértice previo.
  prev = VI(n);
  VB enc(n, false);
  QI Q;
  dist[0] = 0;
  for (int u = 0; u < n; ++u) { // Se agrega este bucle para recorrer todos los vértices de un mismo cc.
    if (not enc[u]) {
      Q.push(u);
      enc[u] = true;
      while (not Q.empty()) {
        int v = Q.front(); Q.pop();
        L.push_back(v);
        for (int w: G[v]) {
          if (not enc[w]) {
            Q.push(w);
            dist[w] = dist[v] + 1;
            prev[w] = v;
            enc[w] = true;
          }
        }
      }
    }
  }
  return dist;
}