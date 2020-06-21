#include <bits/stdc++.h>
const char nl = '\n';
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  const int MAGIC = 111;
  bitset<MAGIC> dp; // dp[i] = is it possible to buy i wings?
  int n; cin >> n;
  if (n >= MAGIC) {
    puts("Yes");
    return 0;
  }
  dp[7] = dp[11] = true;
  for (int i = 12; i < MAGIC; i++) {
    dp[i] = dp[i-7] || dp[i-11];
  }
  for (int i = 1; i <= 7; i++) {
    assert(dp[MAGIC-i]); // proof all larger n works; we can construct a solution by adding many 7-packs to an existing solution
  }
  puts(dp[n] ? "Yes" : "No");
}
