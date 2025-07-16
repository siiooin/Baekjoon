#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;
    cin >> str;

    int count[26] = {};
    int max = 0;
    char result;

    for(int i=0;i<str.size();i++){

        char ch = toupper(str[i]);
        count[ch - 'A']++;
        }
    

    for(int i = 0; i < 26; i++) {
        if(count[i] > max)
        {
            max = count[i];
            result = 'A' + i;
        }
        else if(count[i] ==max)
            result = '?';
    }



    
    cout << result;

    return 0;




}