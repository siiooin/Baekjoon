#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> colors = {
        "black", "brown", "red", "orange", "yellow", 
        "green", "blue", "violet", "grey", "white"
    };

    string arr[3];
    int buffer[3];

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 10; i++){
        if(arr[0] == colors[i]) buffer[0] = i;
        if(arr[1] == colors[i]) buffer[1] = i;
        if(arr[2] == colors[i]) buffer[2] = i;
    }
    
    long long result = (buffer[0] * 10) + buffer[1];

    for(int i = 0; i < buffer[2]; i++) {
        if(buffer[2] == 0)
            result *= 1;
        else
        result *= 10;
    }

    cout << result << endl;

    return 0;
}