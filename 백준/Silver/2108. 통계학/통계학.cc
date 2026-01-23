#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> numbers(N);
    double sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    sort(numbers.begin(), numbers.end());


    int arithmetic_mean = round(sum / N);
    if (arithmetic_mean == -0) arithmetic_mean = 0;


    int median = numbers[N / 2];


    int count[8001] = { 0, };
    for (int i = 0; i < N; i++) {
        count[numbers[i] + 4000]++;
    }

    int max_frequency = 0;
    for (int i = 0; i < 8001; i++) {
        if (count[i] > max_frequency) {
            max_frequency = count[i];
        }
    }

    vector<int> modes;
    for (int i = 0; i < 8001; i++) {
        if (count[i] == max_frequency) {
            modes.push_back(i - 4000); 
        }
    }

    int mode;
    if (modes.size() == 1) {
        mode = modes[0];
    } else {
        sort(modes.begin(), modes.end());
        mode = modes[1];
    }

    int range = numbers[N - 1] - numbers[0];

    cout << arithmetic_mean << "\n";
    cout << median << "\n";
    cout << mode << "\n";
    cout << range << "\n";

    return 0;
}