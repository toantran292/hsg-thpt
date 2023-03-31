#include <bits/stdc++.h>
using namespace std;
#define REP(x, a, b) for (int x = a; x < (b); x++)
#define SZ(v) ((int)(v).size())
#define ALL(v) (v).begin(), (v).end()

typedef int64_t int64;
typedef pair<int, int> ii;
int n;

int64 ans() {
  int m = sqrt(n);
  bool prime[m + 1];
  memset(prime, 1, sizeof(prime));

  for (int p = 2; p * p <= m; p++) {
    if (prime[p]) {
      for (int i = p * p; i <= m; i += p) prime[i] = 0;
    }
  }

  int cnt = 0;
  for (int p = 2; p <= m; p++) {
    cnt += prime[p];
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  cout << ans();

  return 0;
}