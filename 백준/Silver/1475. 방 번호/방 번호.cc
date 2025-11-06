#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int arr[10] = {0, };
    cin >> str;
    
    for(int i = 0; i < str.size(); i++){
        arr[str[i] - '0']++;
    }

    int sum = arr[6] +arr[9];
    arr[6] = sum /2;
    arr[9] = sum - arr[6];

    int max = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << max;
    return 0;
  
}