#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, M[100000];
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> M[i];
    }

    sort(M,M + N);

    int res = M[0] * M[N -1];
    cout << res;

}