#include <bits/stdc++.h>
const char nl = '\n';
using namespace std;
using ll = long long;
using ld = long double;
const int N = 202, X = 1e6;
const int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

set<pair<int, int>> blocked;
set<pair<int, int>> vis;

bool in(int x, int y) {
  return 0 <= x && x <= X && 0 <= y && y <= X;
}

bool dfs(int x, int y, int ox, int oy) {
  if (abs(x-ox) + abs(y-oy) > N) {
    // since we have travelled far from the origin point, we can get to any non-blocked off region.
    return true;
  }
  //cerr << "vis " << x << " " << y << nl;
  vis.emplace(x, y);
  for (int i = 0; i < 4; i++) {
    // make a step
    int nx = x+dx[i], ny = y+dy[i];
    //cerr << nx << " " << ny << nl;
    if (!in(nx, ny) || blocked.count({nx, ny}) || vis.count({nx, ny})) continue;
    if (dfs(nx, ny, ox, oy)) {
      return true;
    }
  }
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int blocked_length; cin >> blocked_length;
  for (int i = 0; i < blocked_length; i++) {
    int x, y; cin >> x >> y;
    blocked.emplace(x, y);
  }
  int sx, sy; cin >> sx >> sy;
  int tx, ty; cin >> tx >> ty;
  bool b = dfs(sx, sy, sx, sy);
  if (vis.count({tx, ty})) {
    cout << "true\n";
    return 0;
  }
  vis.clear();
  b &= dfs(tx, ty, tx, ty);
  if (b) {
    cout << "true\n";
  } else cout << "false\n";
}
