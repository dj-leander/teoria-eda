#include "treasure_graph.h"

bool dfs_find_treasure(const VVC& GC, VVB& vist, const int& n, const int& m, int x, int y) {
  if (x < 0 or x >= n or y < 0 or y >= m)
    return false;
  if (vist[x][y])
    return false;
  vist[x][y] = true;
  if (GC[x][y] == 'X')
    return false;
  if (GC[x][y] == 't')
    return true;
  return dfs_find_treasure(GC, vist, n, m, x-1, y) or dfs_find_treasure(GC, vist, n, m, x+1, y) or dfs_find_treasure(GC, vist, n, m, x, y+1) or dfs_find_treasure(GC, vist, n, m, x, y-1);
}

int dfs_count_treasure(VVC& GC, const int& n, const int& m, int x, int y) {
  if (x < 0 or x >= n or y < 0 or y >= m)
    return 0;
  if (GC[x][y] == 'X')
    return 0;
  bool tresor = GC[x][y] == 't';
  GC[x][y] = 'X';
  return tresor + dfs_count_treasure(GC, n, m, x - 1, y) + dfs_count_treasure(GC, n, m, x + 1, y) + dfs_count_treasure(GC, n, m, x, y + 1) + dfs_count_treasure(GC, n, m, x, y - 1);

}

void main_find_treasures() {
  int n, m;
  VVC GC;  // character graph
  VVB vist;
  cin >> n >> m;
  GC = VVC(n, VC(m));
  for (int i = 0; i < n; ++i)
    for (char& c : GC[i]) cin >> c;
  int x, y;
  cin >> x >> y;
  vist = VVB(n, VB(m, false));
  if (dfs_find_treasure(GC, vist, n, m, x - 1, y - 1)) cout << "yes" << endl;
  else cout << "no" << endl;

}
