#include <iostream>
using namespace std;

void swap(int* a, int* b) {
  int* buf;

  buf = a;
  a = b;
  b = buf;
}

int main() {
  int n, m;
  cin >> n >> m;

  int arr[100001];

  for (int i = 1; i <= n; i++) {
    arr[i] = i;
  }

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    swap(arr[a], arr[b]);
  }

  for (int i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}