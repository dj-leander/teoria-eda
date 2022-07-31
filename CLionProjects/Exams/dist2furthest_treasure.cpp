#include "dist2furthest_treasure.h"

void dist2furthest_treasure(const VVC& map, VVI& dist, Pos& start) {

  QP frontier;
  frontier.push(start);
  dist[start.x][start.y] = 0;

  int furthest_distance = 0;
  while (not frontier.empty()) {
    Pos centre = frontier.front();
    frontier.pop();
    for (int k = 0; k < 4; ++k) {
      Pos next = Pos(centre.x + inc_x[k], centre.y + inc_y[k]);
      auto [next_x, next_y] = next;
      if (pos_ok(next, int(map[0].size()), int(map.size())) and dist[next_x][next_y] == -1) { // Si la posición no ha sido visitada y no rebasa los límites
        dist[next_x][next_y] = dist[centre.x][centre.y] + 1;
        if (map[next_x][next_y] == 't' or map[next_x][next_y] == '.') {
          if (map[next_x][next_y] == 't' and dist[next_x][next_y] > furthest_distance)
            furthest_distance = dist[next_x][next_y];
          frontier.push(next);
        }
      }
    }
  }

  if (not furthest_distance)
    cout << "no treasure can be reached" << endl;
  else
    cout << "maximum distance: " << furthest_distance << endl;

}

/*
 * Crear variables n, m, map y dist como globales antes de llamarlo desde el main.
void main_dist2furthest() {
  cin >> n >> m;
  map = VVC(n, VC(m));
  dist = VVI(n, VI(m, -1));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> map[i][j];
    }
  }
  Pos start;
  cin >> start;  // initial row and column number
  --(start.x), --(start.y);

  dist2furthest_treasure(map, dist, start);
}
*/