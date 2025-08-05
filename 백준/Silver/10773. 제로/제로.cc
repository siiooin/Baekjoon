#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int K;
    cin >> K;
    int N;
    int sum = 0;

    for(int i = 0; i < K;i++){
        cin >> N;

        if(N == 0){
            s.pop();
        }
        else
            s.push(N);
    }

    while(!s.empty()){
        sum += s.top();
        s.pop();

    }

    cout << sum;
    return 0;

}