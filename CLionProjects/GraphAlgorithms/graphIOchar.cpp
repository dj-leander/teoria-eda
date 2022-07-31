//
// Created by Kenneth on 4/20/22.
//

#include "graphIOchar.h"

void llegir_graph_char(graph& g, int r, int c) {
  g = graph (r, vector<char>(c));
  for(int i = 0; i < r; ++i)
    for(int j = 0; j < c; ++j)
      cin >> g[i][j];
}

void escriure_graph_char(const graph& g) {
  cout << endl;
  for(int i = 0; i < g.size(); ++i) {
    cout << "[" << i << "] -> [ ";
    for(int j = 0; j < g[i].size(); ++j) {
      cout << g[i][j] << " ";
    }
    cout << "]";
    cout << endl;
  }
}
