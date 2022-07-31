#include "motxilla.h"

void opt(VI& p, VI& v, VI& s, VI& bs, int bv, int k, int spp, int svp, const int& n, const int& c) { // spp: suma pesos parcial
  if (spp > c) return; // Capacitat excedida: no continuem
  if (k == n) {
    if (svp > bv) { // Millorem la solucio que teniem fins ara
      bs = s;
      bv = svp;
    }
    return;
  }
  s[k] = 0; opt(p, v, s, bs, bv, k+1, spp, svp, n, c); // Deixem obj. k
  s[k] = 1; opt(p, v, s, bs, bv, k+1, spp + p[k], svp + v[k], n, c); // Agafem obj. k
}

void motxilla(int k, int spp, int svp) {
  int c, n, bv = -1; // Millor valor fins ara
  VI p, v, s, bs; // Pesos-Valors-Solucio-Millor solucio
  cin >> c >> n;
  p = v = s = VI(n);
  for (int& x : p) cin >> x;
  for (int& x : v) cin >> x;
  opt(p, v, s, bs, bv, 0, 0, 0, n, c);
  cout << bv << endl;
}
