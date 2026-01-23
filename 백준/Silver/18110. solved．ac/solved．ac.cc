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

    if (N == 0) {
        cout << 0;
        return 0;
    }

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int flag = floor(N * 0.15 + 0.5);

    double sum = 0;
    for (int i = flag; i < N - flag; i++) {
        sum += arr[i];
    }

    double count = N - 2 * flag;
    int result = floor((sum / count) + 0.5);

    cout << result;

    return 0;
}