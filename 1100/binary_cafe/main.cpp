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
  ll ans = 0;

  ll n, k;
  cin >> n >> k;

  k = min(k, 30ll);
  ans = min(n + 1, 1ll << k);

  printf("%lld\n", ans);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}
