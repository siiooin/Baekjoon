#include <iostream>
using namespace std;

int main()
{
    int arr[31] = {
        0,
    };
    int i = 0;

    while (i < 30)
    {
        int n;
        cin >> n;
        arr[n]++;
        i++;
    }

    for (int i = 1; i < 31; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}