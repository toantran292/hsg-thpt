#include <bits/stdc++.h>
using namespace std;
#define REP(x, a, b) for (int x = a; x < (b); x++)
#define SZ(v) ((int)(v).size())
#define ALL(v) (v).begin(), (v).end()

typedef int64_t int64;
typedef pair<int, int> ii;

bool cmp(const ii a, const ii b) { return a.second > b.second; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;
  unordered_map<int, int> hash;
  REP(i, 0, n * m) {
    int x;
    cin >> x;
    hash[x]++;
  }

  vector<ii> tb(hash.begin(), hash.end());
  sort(tb.begin(), tb.end(), cmp);
  int64 ans = 0;
  REP(i, 0, SZ(tb)) {
    if (k == 0) break;
    ans += tb[i].second;
    k--;
  }
  cout << ans;
}