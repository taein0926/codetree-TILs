#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0, };
    int num = 0, tens = 0;
    cin >> num;

    while (num != 0) {
        tens = num / 10;
        if (tens != 0) {
            arr[tens - 1] += 1;
        }
        cin >> num;
    }

    for (int i = 9; i >= 0; i--) {
        cout << (i + 1) * 10 << " - " << arr[i] << "\n";
    }
    return 0;
}