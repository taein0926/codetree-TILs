#include <iostream>
using namespace std;

int main() {
    int arr[100] = { 1, 0, };
    int sum = 0, i = 0;
    cin >> arr[1];

    while (sum < 100) {
        sum = arr[i] + arr[i + 1];
        arr[i + 2] = sum;
        i++;
    }
    for (int j = 0; j < i + 2; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}