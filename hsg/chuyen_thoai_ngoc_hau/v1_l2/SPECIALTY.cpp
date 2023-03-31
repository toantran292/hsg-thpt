#include <bits/stdc++.h>
using namespace std;
#define REP(x, a, b) for (int x = a; x < (b); x++)
#define SZ(v) ((int)(v).size())
#define ALL(v) (v).begin(), (v).end()

typedef int64_t int64;
typedef pair<int, int> ii;

const int64 N_MAX = 101, ANS_MAX = 1e15;
pair<int64, int64> a[N_MAX];
int64 n, m, ans = -1;

bool check(int64 day) {
  int64 total = 0;
  REP(i, 0, n) {
    int64 q = day / (a[i].second + 1);
    int64 r = day % (a[i].second + 1);
    total += a[i].first * (q * a[i].second + r);
  }
  return total >= m;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  REP(i, 0, n) cin >> a[i].first >> a[i].second;

  for (int64 k = ANS_MAX; k >= 1; k /= 2) {
    while (!check(ans + k)) ans += k;
  }

  cout << ++ans;

  return 0;
}