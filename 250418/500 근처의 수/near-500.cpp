#include <iostream>
using namespace std;

int num[10];
int Max = 0, Min = 1000;

int main() {
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        if (num[i] > 500 && num[i] < Min) Min = num[i];
        if (num[i] < 500 && num[i] > Max) Max = num[i];
    }
    cout << Max << " " << Min;
    return 0;
}