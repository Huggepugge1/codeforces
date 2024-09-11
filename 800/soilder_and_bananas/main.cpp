#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
  ll ans;

  ll n, w, k;
  cin >> n >> w >> k;

  for (int i = 1; i <= k; i++) {
    w -= n * i;
  }

  if (w >= 0) {
    cout << 0 << endl;
    return;
  }
  cout << -w << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
