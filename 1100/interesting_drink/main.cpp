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
  int n;
  cin >> n;

  vector<ll> p;
  ll curr;
  while (n--) {
    cin >> curr;
    p.push_back(curr);
  }

  sorted(p);

  ll m;
  cin >> m;

  while (m--) {
    ll ans = 0;

    ll curr;
    cin >> curr;

    ll l = 0, h = p.size(), mid;

    while (l < h - 1) {
      mid = (l + h) / 2;
      if (curr < p[mid]) {
        h = mid;
      } else {
        l = mid;
      }
    }

    if (p[l] > curr) {
      ans = 0;
    } else {
      ans = h;
    }
    printf("%lld\n", ans);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
