#include <iostream>
using namespace std;

int n, num = 1;

int main() {
    cin >> n;
    int arr[n][n] = {};

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[j][i] = num;
            num++;
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