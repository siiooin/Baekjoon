#include <iostream>
#include <string>

using namespace std;


int main() 
{
    string str;
    getline(cin, str);

    int word = 1;
    
    if (str.length() == 1 && str[0] == ' ') {
		cout << 0;
		return 0;
	}
    
    for(int i = 1; i < str.length() - 1; i++)
    {
        if(str[i] == ' ')
            word++;


    }

    cout << word;

	return 0;
}