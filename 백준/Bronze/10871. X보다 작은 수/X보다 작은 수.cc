#include <iostream>
using namespace std;

int main()
{
    int N, X;
    int num[10000];

    cin >> N >> X;

    for(int i = 0 ; i < N ; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(num[i] < X)
        {
            cout << num[i] << " ";

        }
    }

    return 0;



}