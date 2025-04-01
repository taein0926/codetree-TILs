#include <iostream>
using namespace std;

int main() {
    int N = 0, cnt = 0;
    cin >> N;
    int num[N] = {};

    for (int i=0; i<N; i++) {
        cin >> num[i];
        if (num[i] == 2) {
            cnt++;
        }
        if (cnt == 3) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}