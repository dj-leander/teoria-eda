#include <iostream>
#include <set>
#include <string>

using namespace std;

// int dynamic() {
int main() {
  string w;
  set<string> sequence;
  int median;

  // TODO: Falla el caso privado
  while (cin >> w and w != "END") {
    // it apunta al elemento repetido o al final si no se encuentra
    auto it = sequence.find(w);

    if (it == sequence.end()) {
      // agrego la nueva palabra
      sequence.emplace_hint(it, w);
    }

    if (not sequence.empty()) {
      // por defecto un entero es redondeado al menor número
      median = (int(sequence.size())+1)/2;
      it = sequence.begin();
      for (int i = 1; i < median; ++i, ++it);
      cout << *it << endl;
    }
  }
}
