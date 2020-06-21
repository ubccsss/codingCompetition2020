#include <bits/stdc++.h>
const char nl = '\n';
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b; char op; cin >> a >> b >> op;
  ll ans;
  if (op == '+') {
    ans = a+b;
  } else if (op == '-') {
    ans = a-b;
  } else if (op == '*') {
    ans = (ll) a*b;
  } else {
    assert(op == '/');
    ans = (a+b-1)/b;
  }
  while (clock() < 3600*CLOCKS_PER_SEC);
  cout << ans << nl;
}
