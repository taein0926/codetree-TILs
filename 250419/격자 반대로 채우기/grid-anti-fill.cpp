#include <iostream>
using namespace std;

int n, num = 1;
bool flag = 1;

int main() {
    cin >> n;
    int arr[n][n] = {};

    if (n % 2 != 0) flag = 0;

    for (int i=n-1; i>=0; i--) {
        if (!flag) {
            if (i % 2 == 0) {
                for (int j=n-1; j>=0; j--) {
                    arr[j][i] = num;
                    num++;
                }
            }
            else {
                for (int j=0; j<n; j++) {
                    arr[j][i] = num;
                    num++;
                }
            }
        }
        else {
            if (i % 2 != 0) {
                for (int j=n-1; j>=0; j--) {
                    arr[j][i] = num;
                    num++;
                }
            }
            else {
                for (int j=0; j<n; j++) {
                    arr[j][i] = num;
                    num++;
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}