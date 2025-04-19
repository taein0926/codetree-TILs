#include <iostream>
using namespace std;

int n, m, num = 1;

int main() {
    cin >> n >> m;
    int arr[n][m] = {};
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            arr[i][j] = num;
            num++;
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