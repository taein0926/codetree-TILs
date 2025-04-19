#include <iostream>
using namespace std;

int arr[4][4];
int num = 1, sum = 0;

int main() {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<4; i++) {
        for (int j=0; j<num; j++) {
            sum += arr[i][j];
        }
        num++;
    }
    cout << sum;
    return 0;
}