#include <iostream>

using namespace std;

int N = 0, num = 0, Max = 0;
int nums[1000] = {};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        nums[num-1]++;
    }
    for (int i = 0; i < N; i++) {
        if (nums[i] == 1 && i + 1 > Max) Max = i + 1;
    }
    
    if (Max != 0) cout << Max;
    else cout << -1;

    return 0;
}
