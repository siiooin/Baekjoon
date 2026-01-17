#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
	cin.tie(0); 
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;
        stack<char> s;
        bool is_valid = true;

        for (char c : str) {
            if (c == '(') {
                s.push(c);
            } else { 
                if (s.empty()) {
                	is_valid = false;
                    break; 
                }
                s.pop();
            }
        }

        if (is_valid && s.empty()) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}