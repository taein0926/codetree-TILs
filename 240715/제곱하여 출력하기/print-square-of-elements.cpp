#include <iostream>
using namespace std;

int main() {
    int arr[100] = { 0, };
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] * arr[i] << " ";
    }
    return 0;
}