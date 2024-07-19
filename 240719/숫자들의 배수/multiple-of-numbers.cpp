#include <iostream>
using namespace std;

int main() {
    int arr[100] = { 0, };
    int num = 0, i = 0;
    cin >> arr[i];

    while (num < 2) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " ";
            num++;
        }
        else {
            cout << arr[i] << " ";
        }
        i++;
        arr[i] = arr[i - 1] + arr[0];
    }
    return 0;
}