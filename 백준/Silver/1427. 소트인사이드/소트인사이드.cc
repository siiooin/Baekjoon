#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        string str;
        int arr[10000];
        cin >> str;

        for(int i = 0;i < str.size();i++){
                arr[i]=stoi(str.substr(i,1));
        }

        for(int i = 0; i < str.size(); i++){
            for(int j = i+1; j<str.size();j++){
                if(arr[i] < arr[j]){
                    swap(arr[i], arr[j]);
                }
            }
        }

        for(int i =0; i < str.size();i++){
            cout << arr[i];
        }

}