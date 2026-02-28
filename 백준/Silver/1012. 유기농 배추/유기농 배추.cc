#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int num = 0;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int board[n][m];
    bool vis[n][m];
    for (int q = 0; q < n; q++) {
      for (int w = 0; w < m; w++) {
        board[q][w] = 0;
      }
    }

    for (int q = 0; q < n; q++) {
      for (int w = 0; w < m; w++) {
        vis[q][w] = false;
      }
    }

    for (int j = 0; j < k; j++) {
      int a, b;
      cin >> a >> b;
      board[a][b] = 1;
    }

    int num = 0;
    for (int j = 0; j < n; j++) {
      for (int l = 0; l < m; l++) {
        if (board[j][l] == 1 && vis[j][l] != 1) {
          num++;
          queue<pair<int, int> > Q;
          vis[j][l] = 1;
          Q.push(make_pair(j, l));

          while (!Q.empty()) {
            pair<int, int> cur = Q.front();
            Q.pop();
            for (int dir = 0; dir < 4; dir++) {
              int nx = cur.X + dx[dir];
              int ny = cur.Y + dy[dir];

              if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
              if (vis[nx][ny] || board[nx][ny] != 1) continue;
              vis[nx][ny] = 1;
              Q.push(make_pair(nx, ny));
            }
          }
        } else {
          continue;
        }
      }
    }
    cout << num << '\n';
  }
}
