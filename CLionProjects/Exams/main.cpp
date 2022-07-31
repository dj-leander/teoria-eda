#include "dist2furthest_treasure.h"
#include "peaceful_kings.h"

int n, k;
VVC board;
VVB printed;

int main() {
  cin >> n >> k;
  peaceful_kings(n, k);
  return 0;
}
