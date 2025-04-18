#include <iostream>
using namespace std;

int N, result = 100;

int main() {
    cin >> N;
    int num[N];
    for (int i=0; i<N; i++) {
        cin >> num[i];
    }

    for (int i=0; i<N-1; i++) {
        if (num[i+1] - num[i] < result) {
            result = num[i+1] - num[i];
        }
    }
    cout << result;
    return 0;
}