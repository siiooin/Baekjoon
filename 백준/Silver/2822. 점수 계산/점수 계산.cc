#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[8], buf[8];
    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        buf[i] = arr[i];
    }

    sort(buf, buf + 8);

    for (int i = 7; i > 2; i--)
    {
        sum += buf[i];
    }

    cout << sum << '\n';

    for (int i = 0; i < 8; i++)
    {
        for (int j = 7; j > 2; j--)
        {
            if (arr[i] == buf[j])
            {
                cout << i + 1 << " ";
            }
        }
    }

    return 0;
}