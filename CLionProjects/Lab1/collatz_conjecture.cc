#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int collatz() {
  /*
   * Collatz conjecture:
   *  if n is even: n/2+x
   *  otherwise: 3n+y
   *  Example:
   *  8, 5, 20, 11, 38, 20, 11, 38
   *  Output:
   *  length = 3
   */
  int x, y, n, steps = 0, first_repeated_number = 0;
  set<int> sequence;
  bool n_exceeds_10_8 = false, end_cycle = false;
  while(cin >> x >> y >> n) {
    if (n == 0) {
      cout << 1 << endl;
    } else {
      sequence.insert(sequence.begin(), n);
      while (not n_exceeds_10_8 and not end_cycle) {
        if (n % 2 == 0) {
          n = n/2 + x;
        } else {
          n = 3*n + y;
        }
        auto it = sequence.find(n);
        if (it != sequence.end()) {
          // n es repetit
          if (steps == 0) {
            // Guardamos el primer número de la secuencia repetida
            first_repeated_number = *it;
            ++steps;
          } else {
            if (*it == first_repeated_number) {
              // Estamos empezando el ciclo otra vez
              cout << steps << endl;
              end_cycle = true;
            } else {
              // Aumentamos la longitud de la secuencia repetida
              ++steps;
            }
          }
        } else {
          sequence.insert(n);
        }

        if (n > pow(10, 8)) {
          cout << n << endl;
          n_exceeds_10_8 = true;
        }
      }
      // vaciamos la secuencia
      sequence.clear();
      steps = 0;
      first_repeated_number = 0;
      end_cycle = false;
      n_exceeds_10_8 = false;
    }
  }
}

