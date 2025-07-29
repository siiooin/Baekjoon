#include <iostream>
using namespace std;

int factorial(int num);

int main(){
    int N, K;

    cin >> N >> K;

    cout << factorial(N) /(factorial(N -K) * factorial(K));


}

int factorial(int num){
    if(num <= 1)
        return 1;
    return num * factorial(num -1);
}