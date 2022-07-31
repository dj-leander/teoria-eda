#include "dfs.h"

LI dfs_ite(const VVI& graph) {
  int n = graph.size();
  VB vis(n, false);
  LI L;
  SI S;
  for (int u = 0; u < n; ++u) {
    S.push(u);
    while (not S.empty()) {
      int v = S.top(); S.pop();
      if (not vis[v]) {
        vis[v] = true; L.push_back(v);
        for (int w: graph[v])
          S.push(w);
      }
    }
  }
  return L;
}
