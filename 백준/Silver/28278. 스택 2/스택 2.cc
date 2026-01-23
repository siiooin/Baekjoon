#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for(int i=0; i < N;i++){
        int ans;
        cin >> ans;
        switch(ans){
            case 1:
                    int num;
                    cin >> num;
                    s.push(num);
                    break;
            case 2:
                    if(!s.empty()){
                        cout << s.top() << '\n';
                        s.pop();
                    }else{
                        cout << -1 << '\n';
                    }

                    break;

            case 3:
                    cout << s.size()<< '\n';

                    break;

            case 4:
                    if(!s.empty()){
                        cout << 0 << '\n';
                    }else{
                        cout << 1 << '\n';
                    }

                    break;
            case 5:
                    if(s.empty()){
                        cout << -1 << '\n';
                    }
                    else{
                        cout << s.top()<< '\n';
                    }

                    break;
                    

                    

        }

    }

}