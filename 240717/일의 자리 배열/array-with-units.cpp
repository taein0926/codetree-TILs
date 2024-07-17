#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0, };
    cin >> arr[0] >> arr[1];

    for (int i = 0; i < 10; i++) {
        int sum = 0;
        sum = arr[i] + arr[i + 1];
        arr[i + 2] = sum % 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}