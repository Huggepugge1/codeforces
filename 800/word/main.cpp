#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
  string ans;
  cin >> ans;

  ll small = 0, big = 0;
  for (int i = 0; i < ans.size(); i++) {
    if (islower(ans[i])) {
      small++;
    } else {
      big++;
    }
  }

  if (small >= big) {
    for (int i = 0; i < ans.size(); i++) {
      ans[i] = tolower(ans[i]);
    }
  } else {
    for (int i = 0; i < ans.size(); i++) {
      ans[i] = toupper(ans[i]);
    }
  }

  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
