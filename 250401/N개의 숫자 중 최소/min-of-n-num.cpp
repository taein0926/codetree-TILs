#include <iostream>
#include <climits>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int min = INT_MAX, num = 0;
    for (int i=0; i<N; i++) {
        if (A[i] == min) num++;
        if (A[i] < min) {
            min = A[i];
            num = 1;
        }
    }

    cout << min << " " << num;

    return 0;
}
