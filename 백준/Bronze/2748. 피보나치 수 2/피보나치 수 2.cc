#include <iostream>
using namespace std;
long long fibonacci[100] = {0,1,};
long long fibo(int N)
{
    if(N == 0 || N == 1)
        return fibonacci[N];
    else if(fibonacci[N] == 0)
        fibonacci[N] = fibo(N-1) + fibo(N-2);
    return fibonacci[N];
}
int main() {
    int N;
    cin >> N;
    cout << fibo(N);
}