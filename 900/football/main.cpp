#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
  string s;
  cin >> s;
  pair<ll, ll> p = make_pair(0, 0);
  for (char c : s) {
    if (c == '0') {
      if (p.second) {
        p = make_pair(0, 0);
      }
      p.first++;
      if (p.first == 7) {
        cout << "YES";
        return;
      }
    } else {
      if (p.first) {
        p = make_pair(0, 0);
      }
      p.second++;
      if (p.second == 7) {
        cout << "YES";
        return;
      }
    }
  }
  cout << "NO";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
