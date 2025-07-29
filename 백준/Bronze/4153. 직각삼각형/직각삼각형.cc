#include <iostream>
#include <cmath>
using namespace std;

int main(){
        
    while(1){
    
    int arr[3];
    int max = 0;
    int max_index;
    
    for(int i = 0; i < 3; i++)
    {
        
        cin >> arr[i];

            if(arr[i] > max)
            {
                max = arr[i];
                max_index = i;
            }
        

    }

    if(arr[0] == 0 || arr[1] ==0 || arr[2] == 0)
        return 0;

    arr[max_index] = 0;
    
    if(pow(max,2) == pow(arr[0],2) + pow(arr[1],2) + pow(arr[2],2))
    {
        cout << "right"<< "\n";
    }
    else
        cout << "wrong"<< "\n";

}

}