#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int solution(string s) {
    int count = 0;
    string str = s;
    queue<char> q;

    for (int i = 0; i < (int)str.size(); i++) {
        q.push(str[i]);
    }

    int x = 0;
    while (x < (int)str.size()) {
        stack<char> stk;
        q.push(q.front());
        q.pop();

        bool valid = true;
        for (int i = 0; i < (int)str.size(); i++) {
            char c = q.front();
            q.pop();
            q.push(c);

            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            } else {
                if (stk.empty()) { valid = false; continue; }
                char top = stk.top();
                if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                    stk.pop();
                } else {
                    valid = false;
                }
            }
        }

        if (valid && stk.empty()) {   // valid도 같이 확인해야 함
            count++;
        }
        x++;
    }
    return count;
}