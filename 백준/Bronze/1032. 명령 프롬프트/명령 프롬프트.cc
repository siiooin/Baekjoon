#include <iostream>
using namespace std;

int main(){
        int n;
        cin >> n;

        string str[n];

        for(int i = 0 ; i<n;i++){
                cin >> str[i];
        }

        for(int i = 0; i < str[0].size();i++){
                
                for(int j = 0; j< n ;j++){
                        if(str[0][i] != str[j][i])
                                str[0][i] = '?';
                }
                cout << str[0][i];
        }
}