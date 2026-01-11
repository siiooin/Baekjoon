#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int arr[10001] = { 0 };
    int N;
    int cnt;

    cin >> N;

    for(int i =0;i < N;i++){
        cin >> cnt;
        arr[cnt]++;
    }

    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << '\n';
        }
    }
}