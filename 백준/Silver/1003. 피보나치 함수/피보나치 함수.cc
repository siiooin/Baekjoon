#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int N;
        int count[40][2];
        cin >> N;
        
        count[0][1] =1;
        count[0][2] = 0;
        count[1][1] = 0;
        count[1][2] = 1;
        for(int j = 2; j <= N; j++){
            count[j][1] = count[j-1][1] + count[j-2][1];
            count[j][2] = count[j-1][2] + count[j-2][2];
        }

        cout << count[N][1] << " " << count[N][2] << "\n";
        
    }



}