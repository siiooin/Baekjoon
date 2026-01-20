#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<pair<int, int>> p(N);

    for (int i = 0; i < N; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << p[i].first << " " << p[i].second << '\n';
    }

    return 0;
}