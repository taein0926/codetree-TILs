#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0, };
    int sum = 0, i = 0;
    cin >> arr[0] >> arr[1];

    while (i < 8) {
        sum = (2 * arr[i]) + arr[i + 1];
        arr[i + 2] = sum;
        i++;
    }
    for (int j = 0; j < i + 2; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}