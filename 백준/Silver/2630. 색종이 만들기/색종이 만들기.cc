#include <iostream>
using namespace std;

int paper[129][129];
int white;
int blue;

void divide(int row, int col, int size) {
  for (int i = row; i < row + size; i++) {
    for (int j = col; j < col + size; j++) {
      if (paper[i][j] != paper[row][col]) {
        divide(row, col, size / 2);
        divide(row, col + size / 2, size / 2);
        divide(row + size / 2, col, size / 2);
        divide(row + size / 2, col + size / 2, size / 2);
        return;
      }
    }
  }
  if (paper[row][col] == 1) {
    blue++;
  } else {
    white++;
  }
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> paper[i][j];
    }
  }

  divide(0, 0, N);

  cout << white << '\n' << blue;
}
