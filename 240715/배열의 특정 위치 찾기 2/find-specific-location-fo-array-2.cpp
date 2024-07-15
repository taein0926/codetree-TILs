#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0, };
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) {
            oddSum += arr[i];
        }
        else {
            evenSum += arr[i];
        }
    }
    if (oddSum > evenSum) {
        cout << oddSum - evenSum;
    }
    else {
        cout << evenSum - oddSum;
    }
    return 0;
}