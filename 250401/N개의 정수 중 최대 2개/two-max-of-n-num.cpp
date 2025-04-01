#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[100];

bool compare(int a, int b) {
    return a > b;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A+N, compare);
    cout << A[0] << " " << A[1];

    return 0;
}
