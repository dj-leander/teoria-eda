#ifndef GRAPHALGORITHMS_DIJKSTRA_H
#define GRAPHALGORITHMS_DIJKSTRA_H

#include "utils.h"


typedef pair<double, int> ArcP; // arc amb pes

// using std::greater<int>;

typedef vector< vector<ArcP> > GrafP; // graf amb pesos

/*
 * Per a llegir un graf amb pesos farem el següent:
 *
 * for (int i = 0; i < GrafP.size(); ++i) {
 *  for (int j = 0; j < GrafP[i].size(); ++j) { // Vèrtexs adjacents a GrafP[i]
 *
 *  }
 * }
 */

void dijkstra(const GrafP& G, int s, vector<double>& d, vector<int>& p) {
  int n = G.size();
  d = vector<double>(n, MAXFLOAT);
  d[s] = 0;
  p = vector<int>(n, -1);
  vector<bool> S(n, false);
  priority_queue <ArcP, vector<ArcP>, greater<ArcP>> Q;
  Q.push(ArcP(0, s));
  while (not Q.empty()) {
    int u = Q.top().second;
    Q.pop();
    if (not S[u]) {
      S[u] = true;
      for (int i = 0; i < int(G[u].size()); ++i) {
        int v = G[u][i].second;
        int c = G[u][i].first;
        if (d[v] > d[u] + c) {
          d[v] = d[u] + c;
          p[v] = u;
          Q.push(ArcP(d[v], v));
        }
      }
    }
  }
}

#endif //GRAPHALGORITHMS_DIJKSTRA_H
