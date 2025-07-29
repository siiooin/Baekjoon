#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int a, b;

    cin >> a >> b;
    if(a>b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    int res = gcd(a,b);
    cout << res << "\n";
    int lcm = a * b / res;
    cout << lcm;

    return 0;

}