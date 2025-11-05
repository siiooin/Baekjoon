#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){


    int N ,M;
    cin >> N;
    vector<int> arr(N,0);

    int count = 0;
    int i = 0;
    int j = N - 1;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    cin >> M;

    sort(arr.begin(),arr.end());

    while(i < j){
        if(arr[i] + arr[j] > M){
            j--;
        }else if(arr[i] + arr[j] < M){
            i++;
        }else{
            count++;
            i++;
            j--;
        }
    }

    cout << count << "\n";


}