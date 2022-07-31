#include <iostream>
#include <queue>

using namespace std;

int collection_of_numbers() {
  char l;
  int n, top;
  priority_queue<int> numbers;

  while(cin >> l) {
    if (l == 'A') {
      // mostramos el elemento mas grande
      if (numbers.size() == 0)
        cout << "error!" << endl;
      else
        cout << numbers.top() << endl;
    } else if (l == 'S') {
      // agregamos un nuevo numero
      cin >> n;
      numbers.push(n);
    } else if (l == 'R') {
      // eliminamos el elemento mas grande
      if (numbers.size() == 0)
        cout << "error!" << endl;
      else
        numbers.pop();
    } else if (l == 'I' or l == 'D') {
      // incrementamos o decrementamos el elemento situado en la cima de la cola
      cin >> n;
      if (numbers.size() == 0)
        cout << "error!" << endl;
      else {
        top = numbers.top();
        numbers.pop(); // eliminamos el elemento de la cima
        if (l == 'I')
          numbers.push(top + n);
        else
          numbers.push(top - n);
      }
    }

    }
}
