#include <iostream>
using namespace std;


int main(){
    int A, B, C;
    int count[10] = {};

    cin >> A >> B >> C;

    int result = A * B * C;

    string s = to_string(result);

    for(char ch : s){
        count[ch - '0']++;
    }

    for(int v : count){
        cout << v << "\n";
    }


    return 0;

}