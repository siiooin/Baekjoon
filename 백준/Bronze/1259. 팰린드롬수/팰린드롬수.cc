#include <iostream>
using namespace std;
void swap(string& s){
    int left = 0;
    int right = s.size() -1;

     while(left < right){
        swap(s[right], s[left]);
        right--;
        left++;
    }
}

int main(){
    string str;

    while(1){
        cin >> str;

        if(str == "0") 
            break;

        string temp = str;
        swap(str);

        if(temp == str)
            cout << "yes" << "\n";
        else
            cout << "no"<< "\n"; 

    }

    return 0;
    
}



