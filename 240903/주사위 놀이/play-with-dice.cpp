#include <iostream>
using namespace std;

int main() {
    int arr[6] = { 0, };
    int num = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        arr[num - 1] += 1;
    }
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " - " << arr[i] << "\n";
    }
    return 0;
}