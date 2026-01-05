#include <iostream>
#include <stack>
using namespace std;

int main(){

    int N, B;

    cin >> N >> B;
    stack<int> s;

    if(N==0){
        cout << 0;
        return 0;
    }


    if(N <B){
        if(N >= 10){
            int temp = N + 55;
            cout << (char(temp));
        }else{
            cout << N;
        }
    }
    else{
        while (N > 0){
        s.push(N % B);
        N /= B;
        }
    }


    while(s.size() != 0){
        if(s.top() >= 10){
            int temp = s.top() + 55;
            cout << (char(temp));
        }else{
            cout << s.top();
        }
        s.pop();
    }

    return 0;
}