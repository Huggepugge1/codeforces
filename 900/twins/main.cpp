#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define sorted(vec) sort(vec.begin(), vec.end())
template <typename T> T pop(vector<T> &vec) {
  T value = vec.back();
  vec.pop_back();
  return value;
}

void solve() {
  ll ans = 0, sum = 0;

  ll n;
  cin >> n;
  vector<ll> coins;

  for (int i = 0; i < n; i++) {
    ll curr;
    cin >> curr;
    coins.push_back(curr);
    sum += curr;
  }

  sort(coins.begin(), coins.end());

  while (sum >= 0) {
    sum -= pop(coins) * 2;
    ans++;
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
