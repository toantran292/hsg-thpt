#include <bits/stdc++.h>
using namespace std;
#define REP(x, a, b) for (int x = a; x < (b); x++)
#define SZ(v) ((int)(v).size())
#define ALL(v) (v).begin(), (v).end()

typedef int64_t int64;
typedef pair<int, int> ii;

// ENTER YOUR CODE

char arr[501][501];
bool isNotVisit[501][501];
int n, m, moveX[4] = {0, 0, -1, 1}, moveY[4] = {-1, 1, 0, 0};
ii st;

bool isValid(int i, int j) {
  return arr[i][j] != 'x' && i >= 0 && i < n && j >= 0 && j < m;
}

bool BFS(int x, int y) {
  if (!isValid(x, y)) return 0;
  if (!isNotVisit[x][y]) return 0;
  if (arr[x][y] == 'J') return 1;

  isNotVisit[x][y] = 0;
  REP(i, 0, 4) {
    if (BFS(x + moveX[i], y + moveY[i])) return 1;
  }
  isNotVisit[x][y] = 1;

  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;
  memset(isNotVisit, 1, sizeof(isNotVisit));
  REP(i, 0, n)
  REP(j, 0, m) {
    cin >> arr[i][j];
    if (arr[i][j] == 'R') st = {i, j};
  }

  cout << (BFS(st.first, st.second) ? "YES" : "NO");

  return 0;
}