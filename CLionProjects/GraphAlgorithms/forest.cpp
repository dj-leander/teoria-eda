#include "forest.h"

/* Con dfs podemos recorrer el componente conexo de un vértice x.
 * Sumamos a v (++v) porque contamos el número de vértices que visitamos
 * y el número de adyacencias también las contamos aunque en este
 * caso lo hacemos por dos.
 */
void dfs_count_vertices_and_edges(int x, int& v, int& a) {
  if (vist[x]) return;
  vist[x] = true;
  ++v;
  a += G[x].size();
  for (int y: G[x])
    dfs_count_vertices_and_edges(y, v, a);
}

void count_trees_in_forest() {
  int n_components = 0;
  vist = VB(n, false);
  for (int x = 0; x < n; ++x) {
    /* El siguiente condicional evita visitar un vértice que pertenece
     * a un componente conexo ya visitado.
     */
    if (not vist[x]) {
      int v = 0;
      int a = 0;
      dfs_count_vertices_and_edges(x, v, a);
      /* En la funcion dfs de arriba se cuentan las arestas por dos,
       * es por eso que multiplicamos (v-1) por dos.
       * Un grafo que no contiene ciclos es como un grafo trayecto.
       * Si tenemos v vértices el nombre de aristas es v-1.
       */
      if (a != 2*(v-1)) {
        cout << "The graph contains a cycle" << endl;
        return;
      }
      ++n_components;
    }
  }
  cout << n_components << endl;
}

void forest_main() {
  int m;
  while(cin >> n >> m) {
    G = VVI(n);
    while(m--) {
      int x, y;
      cin >> x >> y;
      G[x].push_back(y);
      G[y].push_back(x);
    }
    count_trees_in_forest();
  }
}

