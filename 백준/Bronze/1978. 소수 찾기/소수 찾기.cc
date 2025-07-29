#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int N;
    int count = 0;
    int real = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];

        for(int j = 2; j < arr[i]; j++){
            if(arr[i] % j == 0)
            {
                count++;
            }
            
        }
        if(count == 0)
            if(arr[i]!= 1)
             real++;

        count = 0;

    }

    cout << real;

}


