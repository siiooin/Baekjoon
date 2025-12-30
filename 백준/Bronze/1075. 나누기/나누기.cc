#include <iostream>
using namespace std;

int main() {
	int N, F;
	int ans = 0;
	cin >> N >> F;
	
	N /= 100;
	N *= 100;
	
	while((N+ ans) % F != 0 && ans < 100){
        ans++;
    }
	if(ans< 10){
        cout << "0"<< ans;
    } 
	else cout <<ans;
	
}
