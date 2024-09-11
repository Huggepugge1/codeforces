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

  ll n;
  cin >> n;

  ll a, b;
  while (n--) {
    cin >> a >> b;
    if (a != b) {
      printf("Happy Alex\n");
      return;
    }
  }

  printf("Poor Alex\n");
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
