#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define X first
#define Y second

int board[1001][1001];
bool vis[1001][1001];
int dist[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  int n, m;
  cin >> n >> m;

  // clang-format off
// 이 안의 코드는 실행/저장 시에도 절대 변하지 않습니다.
queue<pair<int, int> > Q;
  // clang-format on
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) dist[i][j] = -1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
      if (board[i][j] == 2) {
        dist[i][j] = 0;
        Q.push(make_pair(i, j));
      } else if (board[i][j] == 0) {
        dist[i][j] = 0;
      }  // 버전이 안 맞아서 컴파일이 안 ㄷ된대
    }
  }

  while (!Q.empty()) {
    pair<int, int> cur = Q.front();
    Q.pop();
    for (int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (dist[nx][ny] != -1 || board[nx][ny] != 1) continue;
      dist[nx][ny] = dist[cur.X][cur.Y] + 1;
      Q.push(make_pair(nx, ny));
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << dist[i][j] << " ";
      if (j == m - 1) {
        cout << '\n';
        break;
      }
    }
  }

  return 0;
}