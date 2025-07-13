#include <iostream>
using namespace std;

int main(){
    int N;
    int M = 0;
    double sum = 0.0;
    double avg= 0.0;
    double score[1000] = {};
    double buffer[1000]= {};

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> score[i];
    }

    for(int i = 0; i < N; i++)
    {
        
        if(score[i] > M)
        {
            M = score[i];
        }
    }   


    for(int i = 0; i < N; i++)
    {
        buffer[i] = (score[i] / M) * 100;
    }


   for(int i = 0; i < N; i++)
    {
        sum += buffer[i];
        avg = sum / N;
    }
    
    cout << avg;

    return 0;


}
