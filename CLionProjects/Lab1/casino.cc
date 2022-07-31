#include <iostream>
#include <map>
#include <string>

using namespace std;

int casino() {
  map<string, int>  players;
  string name, command;
  int money;

  while(cin >> name >> command) {
    if (command == "enters") {
      auto it = players.find(name);
      if (it == players.end()) {
        // a new player enters the game
        players.emplace_hint(it, name, 0);
      } else {
        // the player is already in the casino
        cout << name << " is already in the casino" << endl;
      }
    } else if (command == "wins") {
        auto it = players.find(name);
        if (it == players.end()) {
          cout << name << " is not in the casino" << endl;
          cin >> money;
        } else {
          cin >> money;
          it->second += money;
        }
    } else if (command == "leaves") {
        auto it = players.find(name);
        if (it == players.end()) {
          cout << name << " is not in the casino" << endl;
        } else {
          cout << name << " has won " << it->second << endl;
          players.erase(it);
        }
    }
  }

  cout << "----------" << endl;
  for (const auto& player: players) {
    cout << player.first << " is winning " << player.second << endl;
  }

}
