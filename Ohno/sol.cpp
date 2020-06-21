#include <bits/stdc++.h>
const char nl = '\n';
using namespace std;
using ll = long long;
using ld = long double;

int square(int x) {
  return x*x;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int R, D, n; cin >> R >> D >> n;
  int ans = 0;
  while (n--) {
    int x, y, r; cin >> x >> y >> r;
    int dist_squared = square(x) + square(y);
    ans += (square(D+r) <= dist_squared && dist_squared <= square(R-r));
  }
  cout << ans << nl;
}
