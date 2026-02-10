#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int a, b, c; cin >> a >> b >> c;
    cout << (a == b && b == c ? (a + 10) * 1000 :
            a == b || a == c ? 1000 + a * 100 :
            b == c ? 1000 + b * 100 :
            max({a, b, c}) * 100);
}
