#include <iostream>
using namespace std;
int a[201][201];
int b[201][201];
int c[201][201];

int main() {
  int N, M;
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> a[i][j];
    }
  }

  int t, r;
  cin >> t >> r;
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < r; j++) {
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < r; j++) {
      c[i][j] = 0;
      for (int k = 0; k < M; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < r; j++) {
      cout << c[i][j] << " ";
    }
    cout << '\n';
  }

  return 0;
}