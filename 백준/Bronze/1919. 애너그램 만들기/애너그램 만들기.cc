#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;

    int alphabet1[26] = {};
    int alphabet2[26] = {};

    for(int i=0; i < str1.size();i++){
        alphabet1[str1[i] - 'a']++;
    }

    for(int i=0; i < str2.size();i++){
        alphabet2[str2[i] - 'a']++;
    }

    int ans = 0;

    for(int i = 0; i < 26; i++){
        if(alphabet1[i] != alphabet2[i]){
            ans += abs(alphabet1[i] - alphabet2[i]);
        }
    }

    cout << ans;

    return 0;
}