#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool comp(string str1, string str2);

int main() {
  string str[51];
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    string guitar;
    cin >> guitar;
    str[i] = guitar;
  }

  sort(str, str + N, comp);

  for (int i = 0; i < N; i++) {
    cout << str[i] << '\n';
  }

  return 0;
}

bool comp(string str1, string str2) {
  if (str1.size() == str2.size()) {
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < str1.size(); i++) {
      if (isdigit(str1[i])) {
        sum1 += str1[i] - '0';
      } else {
        continue;
      }
    }

    for (int i = 0; i < str2.size(); i++) {
      if (isdigit(str2[i])) {
        sum2 += str2[i] - '0';
      } else {
        continue;
      }
    }
    if (sum1 == sum2) {
      return str1 < str2;
    } else
      return sum1 < sum2;
  } else {
    return str1.size() < str2.size();
  }
}
