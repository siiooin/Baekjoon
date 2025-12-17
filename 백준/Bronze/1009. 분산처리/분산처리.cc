#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;		

    for (int i = 0; i < t; i++) 
    {
        int a, b, buffer = 1;		
        cin >> a >> b;

        for (int j = 0; j < b; j++) 
        {
            buffer = (buffer * a) % 10;		
        }

        if (buffer == 0) 
        {
            cout << 10 << endl;		
        }
        else 
        {
            cout << buffer << endl;
        }
    }
    return 0;
}