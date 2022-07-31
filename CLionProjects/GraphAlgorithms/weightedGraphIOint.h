#ifndef GRAPHALGORITHMS_WEIGHTEDGRAPHIOINT_H
#define GRAPHALGORITHMS_WEIGHTEDGRAPHIOINT_H

#include "utils.h"

/**
 *
 * @param WG Graf amb el pes que costa anar de un vèrtex a un altre.
 * @param n nombre de vèrtexs
 * @param m nombre d'arestes
 */
void llegir_weightedGraph(WGraph& WG, const int& n, const int& m) {
  WG = WGraph(n);
  for (int i = 0; i < n; ++i) {
    while(m >= 0) {
      int u, v; // vertex
      double w; // weight
      cin >> u >> v >> w;
      WGraph[u].push_back(make_pair(w, v));
      --m;
    }
  }
}

#endif //GRAPHALGORITHMS_WEIGHTEDGRAPHIOINT_H
