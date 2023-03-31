#include <bits/stdc++.h>
using namespace std;
#define REP(x, a, b) for (int x = a; x < (b); x++)
#define SZ(v) ((int)(v).size())
#define ALL(v) (v).begin(), (v).end()

typedef int64_t int64;
typedef pair<int, int> ii;

int n;
int64 ans() {
  int64 a[n + 1] = {0, 0, 1};
  if (n < 3) return a[n];

  REP(i, 3, (n + 1)) { a[i] = a[i - 1] + a[i - 2] + (1LL << (i - 2)); }

  return (1LL << n) - a[n];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  cout << ans();
  return 0;
}