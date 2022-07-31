#include "binary.h"
#include "prime.h"
#include "cadenes.h"
#include "permutacions.h"
#include "quadrats_llatins.h"
#include "n_reines.h"
#include "motxilla.h"
#include "quicksort.h"

int main() {
  /*
  binari(4);
  if (is_prime(5)) {
    cout << "Is prime." << endl;
  }
  cadenes(4);
  VI A(8);
  escriu_permutacions1(8, A, 0);
  */

  // quadrats_llatins(3);
  // reines(8);

  // motxilla(0, 0, 0);

  // reines(4);
  VI v = {2, 9, 6, 8, 10, 4};
  quicksort(v);
  print_vector(v);

}
