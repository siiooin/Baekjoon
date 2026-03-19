#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isHan(int n) {
    if (n < 100) return true; 
    if (n == 1000) return false; 


    int h = n / 100;          
    int t = (n / 10) % 10;    
    int o = n % 10;           

    if ((h - t) == (t - o)) return true;
    return false;
}

int main() {
    int X;
    cin >> X;

    int count = 0;
    for (int i = 1; i <= X; i++) {
        if (isHan(i)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}