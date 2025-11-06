#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v(N,0);
    queue<int> q;

    for(int i = 0; i < N; i++){
        v[i]= i + 1;
        q.push(v[i]);
    }

   while(N !=1){
        q.pop();
        q.push(q.front());
        q.pop();
        N--;
    }
    

    cout << q.front();



}