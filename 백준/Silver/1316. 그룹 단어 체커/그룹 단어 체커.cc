#include <iostream>
using namespace std;

int main() {
  int N;
  int count = 0;
  cin >> N;
  bool flag = false;

  for (int i = 0; i < N; i++) {
    string str;
    int arr[128] = {
        0,
    };
    cin >> str;

    for (int j = 0; j < str.size(); j++) {
      if (str[j] == str[j + 1]) {
        continue;
      } else if (str[j] != str[j + 1]) {
        arr[(int)str[j]]++;
        if (arr[(int)str[j]] >= 2) {
          flag = false;
          break;
        }
      }
      flag = true;
    }

    if (flag) {
      count++;
    }
  }

  cout << count;
}