#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        string str;
        getline(cin, str);

        if (str == ".") break; 

        stack<char> st;
        bool ok = true; 

        for (char c : str) {
            if (c == '(' || c == '[') st.push(c);
            else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    ok = false;
                    break;
                }
                st.pop();
            }
            else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }

        if (ok && st.empty()) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
