#include <iostream>
#include <string>
using namespace std;


void swap(string& s)
{
    int left = 0;
    int right = s.size() - 1;

    while(left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
    
}


int main()
{
    string str, temp;

    cin >> str;
    temp = str;

    swap(str);

    if(str == temp)
    {
        cout << 1;
    }
    else
        cout << 0;

    
    return 0;
    

}


    
