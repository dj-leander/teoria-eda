#include "two_colors.h"

void dfs_two_colors(int x, int& v, int& a) {
  if (vist[x]) return;
  vist[x] = true;
  ++v;
  a += G[x].size();
  for (int y: G[x])
    dfs_two_colors(y, v, a);
}

void colored_graph_two_colors() {
  vist = VB(n, false);
  for (int x = 0; x < n; ++x) {
    /* El siguiente condicional evita visitar un vértice que pertenece
     * a un componente conexo ya visitado.
     */
    if (not vist[x]) {
      int v = 0;
      int a = 0;
      dfs_two_colors(x, v, a);
      /* En la funcion dfs de arriba se cuentan las arestas por dos,
       * es por eso que multiplicamos (v-1) por dos.
       * Un grafo que no contiene ciclos es como un grafo trayecto.
       * Si tenemos v vértices el nombre de aristas es v-1.
       */
      if (a != 2*(v-1)) {
        // cout << "The graph contains a cycle" << endl;
        cout << "no";
        return;
      }
    }
  }
  cout << "yes" << endl;
}

void main_two_colors() {
  while(cin >> n >> m) {
    G = VVI(n);
    while(m--) {
      int x, y;
      cin >> x >> y;
      G[x].push_back(y);
      G[y].push_back(x);
    }
    colored_graph_two_colors();

  }
}

