#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;
  map <string, int> frec;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string line;
    getline(cin, line);
    stringstream token(line);
    string country;
    token >> country;
    frec[country]++;
  }
  for (auto pp: frec) cout << pp.first << ' ' << pp.second << '\n';
  return (0);
}
