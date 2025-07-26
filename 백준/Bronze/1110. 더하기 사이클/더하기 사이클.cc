#include <iostream>
using namespace std;

int main(){
    int num, current;
    int count = 0;

    cin >> num;
    current = num;

    do {
        int sum = (current / 10) + (current % 10);
        current = (current % 10) * 10 + (sum % 10);
        count++;
    } while (current != num);

    cout << count << endl;

    return 0;
}
