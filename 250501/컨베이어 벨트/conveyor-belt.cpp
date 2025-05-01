#include <iostream>

using namespace std;

int n, t;
int u[200];
int d[200];

void MoveNum(int u[], int d[]) {
    int tmp = u[n-1];

    for (int i = n-1; i >= 0; i--) {
        u[i] = u[i-1];
    }
    u[0] = d[n-1];
    for (int i = n-1; i >= 0; i--) {
        d[i] = d[i-1];
    }
    d[0] = tmp;
}

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> u[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    for (int i = 0; i < t; i++) {
        MoveNum(u, d);
    }

    for (int i = 0; i < n; i++) {
        cout << u[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }

    return 0;
}
