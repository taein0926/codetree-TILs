#include <iostream>

using namespace std;

int n, m, num = 1;

int main() {
    cin >> n >> m;
    int arr[n][m] = {};
    int a = 0, b = 0;

    for (int i=0; i<n+m-1; i++) {
        if (i < m) {
            for (b=i; b>=0; b--) {
                if (i - b < n) {
                    arr[i-b][b] = num;
                    num++;
                }
            }
        }
        else {
            b = m-1;
            for (a=i-b; a<n; a++) {
                if (i - a >= 0) {
                    arr[a][i-a] = num;
                    num++;
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
