#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    int asc = 0;
    int des = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; i++)
    {
        if (++arr[i] == arr[i + 1])
        {
            asc++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (--arr[i] == arr[i + 1])
        {
            des++;
        }
    }

    if (asc == 7)
    {
        cout << "ascending";
    }
    else if (des == 7)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
}