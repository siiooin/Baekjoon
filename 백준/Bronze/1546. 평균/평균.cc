#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N;

    int score[1000];
    for(int i = 0; i < N; i++){
        cin >> score[i];
    }

    long sum = 0;
    long max =0;

    for(int i = 0; i < N; i++){
        if(score[i] > max){
            max = score[i];
        }
        sum = sum + score[i];
    }

    double result = ((sum * 100.0) / max)/ N;
    cout << result << "\n";


}
