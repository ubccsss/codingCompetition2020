#include <bits/stdc++.h>
const char nl = '\n';
using namespace std;
using ll = long long;
using ld = long double;

int I, O;
vector<vector<int>> orders;

// dp[i, j] = given that we have ingredient set j, how many orders out of the orders [i..O] can we fulfill?
map<pair<int, vector<int>>, int> dp;
int solve(int i, vector<int> j) {
  if (i >= O) return 0;
  if (dp.count({i, j})) return dp[{i, j}];
  // don't fulfill order i
  int ans = solve(i+1, j);
  // try fulfilling order i
  vector<int> nxtj = j;
  for (int k = 0; k < I; k++) {
    nxtj[k] -= orders[i][k];
  }
  if (all_of(nxtj.begin(), nxtj.end(), [](int x) { return x >= 0; })) {
    // we can fulfill this without running out of stuff
    ans = max(ans, solve(i+1, nxtj) + 1);
  }
  return dp[{i, j}] = ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> I >> O;
  vector<int> have(I);
  for (int& i : have) cin >> i;
  orders.resize(O, vector<int>(I));
  for (int i = 0; i < O; i++) {
    for (int j = 0; j < I; j++) {
      cin >> orders[i][j];
    }
  }
  cout << solve(0, have) << nl;
}
