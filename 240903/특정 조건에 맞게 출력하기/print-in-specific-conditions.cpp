#include <iostream>
using namespace std;

int main() {
    int arr[100] = { 1, 0, };
    int i = 0;

    while (1) {
        cin >> arr[i];
        if (arr[i] != 0) {
            i++;
            continue;
        }
        else {
            for (int j = 0; j < i; j++) {
                if (arr[j] % 2 == 0) {
                    cout << arr[j] / 2 << " ";
                }
                else {
                    cout << arr[j] + 3 << " ";
                }
            }
        }
    }
    return 0;
}