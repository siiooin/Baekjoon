#include <iostream>
using namespace std;

int main()
{
    int n;
    int fibonacci[45];

    cin >> n;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    cout << fibonacci[n] << '\n';
}