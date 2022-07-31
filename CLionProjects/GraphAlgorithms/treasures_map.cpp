#include "treasures_map.h"

bool pos_ok(const VVC& GC, const Pos& p) {
  return p.x < int(GC.size()) and p.x >= 0 and p.y < int(GC[0].size()) and p.y >= 0;
}


/**
 *
 * @param start posición inicial.
 * @return
 */
void dist_nearest_treasure_ite(const VVC& GC, VVI& dist, Pos& start) {
  QP frontier;

  dist[start.x][start.y] = 0;
  frontier.push(start);

  while (not frontier.empty()) {
    Pos centre_pos = frontier.front(); frontier.pop();
    for (int k = 0; k < 4; ++k) {
      Pos next_pos = {centre_pos.x + inc_x[k], centre_pos.y + inc_y[k]};
      auto [next_x, next_y] = next_pos;
      if (pos_ok(GC, next_pos) and dist[next_x][next_y] == -1) {
        dist[next_x][next_y] = dist[centre_pos.x][centre_pos.y] + 1;
        if (GC[next_x][next_y] == 't') {  // Acabamos la búsqueda cuando encontramos el tesoro
          cout << "minimum distance: " << dist[next_x][next_y];
          return;
        } else if (GC[next_x][next_y] == '.'){
          frontier.push(next_pos);
        }
      }
    }
  }
  cout << "no treasure can be reached" << endl;
}

void dist_furthest_treasure_ite(const VVC& GC, VVI& dist, Pos& start) {
  QP frontier;

  dist[start.x][start.y] = 0;
  frontier.push(start);

  int furthest_distante = 0;
  while (not frontier.empty()) {
    Pos centre_pos = frontier.front(); frontier.pop();
    for (int k = 0; k < 4; ++k) {
      Pos next_pos = {centre_pos.x + inc_x[k], centre_pos.y + inc_y[k]};
      auto [next_x, next_y] = next_pos;
      if (pos_ok(GC, next_pos) and dist[next_x][next_y] == -1) {
        dist[next_x][next_y] = dist[centre_pos.x][centre_pos.y] + 1;
        if (GC[next_x][next_y] == 't' or GC[next_x][next_y] == '.') {
          if (dist[next_x][next_y] > furthest_distante)   // Acabamos la búsqueda cuando encontramos el tesoro
            furthest_distante = dist[next_x][next_y];
          frontier.push(next_pos);
        }
      }
    }
  }
  if (not furthest_distante)
    cout << "no treasure can be reached" << endl;
  else
    cout << "maximum distance: " << furthest_distante << endl;

}

void treasure_map_main() {
  cin >> n >> m;

  cout << endl << "n: " <<  n << " m: " << m << endl;

  VVC GC;

  llegir_graph_char(GC, n, m);

  VVI dist(n, VI(m, -1));

  escriure_graph_char(GC);

  Pos start;
  cin >> start.x >> start.y;  // Restamos porque 1 <= start.x <= n y 1 <= start.y <= m
  --start.x;
  --start.y;

  dist_furthest_treasure_ite(GC, dist, start);
}


