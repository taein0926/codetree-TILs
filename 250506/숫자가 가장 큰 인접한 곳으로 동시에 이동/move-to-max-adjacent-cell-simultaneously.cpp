#include <iostream>

#define MAX_N 20
#define MAX_M 400
#define DIR 4

using namespace std;

bool flag = false;
int n, m, t, cnt = 0;
int a[MAX_N][MAX_N];
int r[MAX_M], c[MAX_M];
int marbles[MAX_N][MAX_N];
int dx[DIR] = {-1, 1, 0, 0};
int dy[DIR] = {0, 0, -1, 1};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 & y < n);
}

int main() {
    cin >> n >> m >> t;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> r[i] >> c[i];
        marbles[r[i]-1][c[i]-1] += 1;
    }

    while (t--) {
        int next_marbles[MAX_N][MAX_N];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (marbles[i][j] == 1) {
                    int max_num = 0;
                    int cur_x = i, cur_y = j, next_x, next_y;
                    for (int k = 0; k < DIR; k++) {
                        next_x = i + dx[k];
                        next_y = j + dy[k];
                        if (InRange(next_x, next_y) && a[next_x][next_y] > max_num) {
                            cur_x = next_x;
                            cur_y = next_y;
                            max_num = a[cur_x][cur_y];
                        }
                    }
                    if (i != cur_x || j != cur_y) {
                        next_marbles[cur_x][cur_y]++;
                        flag = true;
                    }
                }
                else continue;
            }
        }
        if (!flag) break;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                marbles[i][j] = next_marbles[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (marbles[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}