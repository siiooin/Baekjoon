#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int M;
    int str[100000];

    cin >> N;
    cin >> M;

    for(int i = 0; i < N; i++){
        cin >> str[i];
    }

    sort(str, str + N);

    int i= 0;
    int j = N-1;
    int count = 0;

    while(i < j){
        if(str[i] + str[j] < M){
            i++;
        }
        else if(str[i] + str[j] > M){
            j--;
        }
        else{
            count++;
            i++;
            j--;
        }
    }

    cout << count;

}