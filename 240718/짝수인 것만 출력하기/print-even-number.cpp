#include <iostream>
using namespace std;

int main() {
    int arr[100] = { 0, };
    int ans[100] = { 0, };
    int n = 0, j = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            ans[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}