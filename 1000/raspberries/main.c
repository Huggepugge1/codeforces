#define ll long long

#include <stdio.h>

ll min(ll a, ll b) { return a < b ? a : b; }

void solve() {
  ll n, k;
  scanf("%lld %lld", &n, &k);
  ll ans = 100000;

  ll prod = 1;

  while (n--) {
    ll c;
    scanf("%lld", &c);
    ll d = c % k == 0 ? k : c % k;
    if (k - d < ans) {
      ans = min(ans, k - d);
    }
    prod *= c % k;
  }

  if (k == 4) {
    if (prod % 4 == 0) {
      ans = 0;
    } else if (prod % 2 == 0 || prod % 3 == 0) {
      ans = 1;
    } else {
      ans = 2;
    }
  }

  printf("%lld\n", ans);
}

int main() {
  ll t;
  scanf("%lld", &t);
  while (t--) {
    solve();
  }
  return 0;
}
