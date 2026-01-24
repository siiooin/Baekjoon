#include <iostream>
#include <vector>
using namespace std;

#define X first
#define Y second

int main()
{
    int N;
    cin >> N;
    vector<int> rank(N, 1);
    pair<int, int> p[101];
    for (int i = 0; i < N; i++)
    {
        cin >> p[i].X >> p[i].Y;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (p[i].X > p[j].X)
            {
                if (p[i].Y > p[j].Y)
                {
                    rank[j]++;
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << rank[i] << " ";
    }
}