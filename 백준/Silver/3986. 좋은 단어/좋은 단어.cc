#include <iostream>
#include <stack>
using namespace std;

int cnt;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    string str;
    stack<char> s;
    cin >> str;

    for (int j = 0; j < str.size(); j++) {
      if (s.empty()) {
        s.push(str[j]);
      } else {
        if (s.top() == str[j]) {
          s.pop();
        } else {
          s.push(str[j]);
        }
      }
    }
    if (s.empty()) {
      cnt++;
    }
  }

  cout << cnt << '\n';
}
