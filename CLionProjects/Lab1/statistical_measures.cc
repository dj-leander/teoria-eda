#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int stats() {
  int sum = 0;
  int n, max = INT32_MIN;
  string c;
  priority_queue<int, vector<int>, greater<int>> seq;
  while(cin >> c) {
    if (c == "number") {
      cin >> n;
      // Guardamos el mayor
      if (n > max) max = n;
      sum += n;
      // Guardamos el nuevo elemento
      seq.push(n);
    } else if (c == "delete") {
      // Eliminamos el primer número
      int top_number = seq.top();
      if (top_number == max) {
        // TODO: Nos falta busca el mayor, hago bien en utilizar priority_queues ?
      }
      sum -= top_number;
      seq.pop();
    }
    if (not seq.empty()) {
      cout << "minimum: " << seq.top() << ", maximum: " << max << ", average: " << float(sum)/float(seq.size()) << endl;
    } else {
      cout << "no elements" << endl;
    }
  }
}
