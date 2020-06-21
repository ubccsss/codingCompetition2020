#include <bits/stdc++.h>
const char nl = '\n';
using namespace std;
using ll = long long;
using ld = long double;
const int INF = 0x3f3f3f3f;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  // Implements the classical dynamic programming solution to the traveling salesman problem.
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (auto& [x, y] : a) cin >> x >> y;
  vector d(n, vector<int>(n)); // Manhattan distance between each pair of points
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      d[i][j] = abs(a[i].first-a[j].first) + abs(a[i].second-a[j].second);
    }
  }
  vector dp(1 << n, vector<int>(n, INF)); // dp[i][j] = min distance to travel through all destinations in bitmask i ending at j
  for (int i = 0; i < n; i++) {
    // base case
    dp[1 << i][i] = abs(a[i].first) + abs(a[i].second);
  }
  for (int i = 1; i < (1 << n); i++) {
    if ((i & (i-1)) == 0) {
      // 1 bit in bitmask (this is a base case)
      continue;
    }
    for (int j = 0; j < n; j++) {
      if (!(i & (1 << j))) continue;
      for (int k = 0; k < n; k++) {
        if (j == k || !(i & (1 << k))) continue;
        dp[i][j] = min(dp[i][j], dp[i ^ (1 << j)][k] + d[k][j]);
      }
    }
  }
  // recover the optimal solution
  int ans = *min_element(dp[(1 << n)-1].begin(), dp[(1 << n)-1].end());
  int curi = (1 << n)-1, curj = min_element(dp[(1 << n)-1].begin(), dp[(1 << n)-1].end()) - dp[(1 << n)-1].begin();
  vector<int> sol = {curj};
  while (curi & (curi-1)) {
    for (int k = 0; k < n; k++) {
      // which k did we take to get to this dp state?
      if (curj == k || !(curi & (1 << k))) continue;
      if (dp[curi][curj] == dp[curi ^ (1 << curj)][k] + d[k][curj]) {
        curi ^= 1 << curj;
        curj = k;
        break;
      }
    }
    sol.push_back(curj);
  }
  reverse(sol.begin(), sol.end());
  for (int i : sol) cout << i+1 << " ";
  cout << ans << nl;
}
