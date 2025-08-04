#include <iostream>
using namespace std;

int main(){
    int T;
    cin>> T;
    

    for(int i = 0;i<T;i++){
        int k, n;
        cin >> k >> n;
        int P[15][15] = {0};
        

        for(int j =1; j <=14; j++){
            P[0][j] = j; 
        }

        for(int p = 0; p<= k; p++){
            P[p][1] = 1;
        }

        

        for(int n1= 1; n1 <= k; n1++){
            for(int n2= 1; n2 <= n; n2++){
                P[n1][n2] = P[n1-1][n2] + P[n1][n2-1];
                
            }
        }
        cout << P[k][n] << "\n";
    }

    return 0;
    
    }
