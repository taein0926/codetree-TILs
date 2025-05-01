#include <iostream>

using namespace std;

int N, res = 0;
int grid[20][20];

int NumofGold(int x, int y) {
    int num = 0;

    for (int i = x; i < x+3; i++) {
        for (int j = y; j < y+3; j++) {
            if (grid[i][j] == 1) num++;
        }
    }
    return num;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N-2; i++) {
        for (int j = 0; j < N-2; j++) {
            if (NumofGold(i, j) > res) res = NumofGold(i, j);
        }
    }

    cout << res;
    return 0;
}