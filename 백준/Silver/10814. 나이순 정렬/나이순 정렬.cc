#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define X first
#define Y second

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.X < b.X;
}

int main()
{
    int N;
    cin >> N;
    pair<int, string> p[100001];

    for (int i = 0; i < N; i++)
    {
        cin >> p[i].X >> p[i].Y;
    }
    stable_sort(p, p + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << p[i].X << " " << p[i].Y << '\n';
    }

    return 0;
}