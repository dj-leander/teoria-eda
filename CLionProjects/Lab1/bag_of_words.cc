#include <iostream>
#include <map>
#include <string>

using namespace std;

int bag() {
  map<string, int> bag;
  string c; // command
  while (cin >> c) {
    if (c == "minimum?") {
      if (bag.empty()) {
        cout << "indefinite minimum" << endl;
      } else {
        cout << "minimum: " << bag.begin()->first << ", " << bag.begin()->second << " time(s)" << endl;
      }
    } else if (c == "maximum?") {
      if (bag.empty()) {
        cout << "indefinite maximum" << endl;
      } else {
        auto it = (--bag.end());
        cout << "maximum: " << it->first << ", " << it->second << " time(s)" << endl;
      }

  } else if (c == "store") {
      cin >> c;
      // Si guardamos la primera palabra, it apuntara a bag.end()
      auto it = bag.find(c);
      if (it->first == c){
        // es una palabra repetida
        ++it->second;
      } else {
        bag.emplace_hint(it, c, 1);
      }
    } else if (c == "delete") {
      cin >> c;
      auto it = bag.find(c);
      if (it != bag.end()) {
        // solo borramos una palabra que existe
        if (it->second == 1) {
          bag.erase(it);
        } else {
          --it->second;
        }
      }
    }
  }
}

