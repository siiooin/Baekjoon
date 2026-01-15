#include <iostream>
using namespace std;

int main(){
    int N, K;
    int arr[10001];
    int count = 0;

    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            arr[i] = i;
            count++;
            if(count == K){
                cout << arr[i];
            }
        }
        else{
            arr[i] = 0;
        }
    }

    if(count < K){
        cout << 0;
    }

}