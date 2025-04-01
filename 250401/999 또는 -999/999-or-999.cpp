#include <iostream>
#include <climits>
using namespace std;

int main() {
    int Max = INT_MIN, Min = INT_MAX, num = 0;
    while (1) {
        cin >> num;
        if (num == 999 || num == -999) break;
        if (num > Max) Max = num;
        if (num < Min) Min = num;
    }
    cout << Max << " " << Min;
    return 0;
}