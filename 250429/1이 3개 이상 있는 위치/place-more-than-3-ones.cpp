#include <iostream>

using namespace std;

int n, res = 0;
int grid[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool InRange(int x, int y) {
    return(0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int k = 0; k < 4; k++) {
                int nx = i + dx[k], ny = j + dy[k];
                if(InRange(nx, ny) && grid[nx][ny] == 1) {
                    cnt++;
                }
            }
            if (cnt >= 3) res++;
        }
    }

    cout << res;
    return 0;
}