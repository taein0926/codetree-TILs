#include <iostream>
using namespace std;

int main() {
    int arr[9] = { 0, };
    int n = 0, num = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[num - 1] += 1;
    }
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}