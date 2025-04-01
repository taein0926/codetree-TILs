#include <iostream>

using namespace std;

int N = 0, num = 0, Max = 0;
int nums[1001] = {};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        nums[num]++;
    }
    
    for (int i = 1; i < 1001; i++) {
        if (nums[i] == 1 && i > Max) Max = i;
    }
    
    if (Max != 0) cout << Max;
    else cout << -1;

    return 0;
}
