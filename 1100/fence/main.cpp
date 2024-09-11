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
  pair<ll, ll> ans = {1, 0};

  ll n, m;
  cin >> n >> m;
  ll k[n];
  for (ll i = 0; i < m; i++) {
    cin >> k[i];
    ans.second += k[i];
  }

  ll curr = ans.second;

  for (ll i = m; i < n; i++) {
    cin >> k[i];
    curr -= k[i - m];
    curr += k[i];
    if (ans.second > curr) {
      ans.first = i - m + 2;
      ans.second = curr;
    }
  }

  printf("%lld\n", ans.first);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
