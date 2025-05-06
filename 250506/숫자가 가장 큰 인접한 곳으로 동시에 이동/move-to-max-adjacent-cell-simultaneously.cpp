#include <iostream>
#include <vector>

#define MAX_N 20
#define MAX_M 400
#define DIR 4

using namespace std;

bool flag = false;
int n, m, t, cnt = 0;
int a[MAX_N][MAX_N];
int r[MAX_M], c[MAX_M];
vector<vector<int>> marbles(MAX_N, vector<int>(MAX_N, 0));
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
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (marbles[i][j] == 1) {
                    int max_num = 0;
                    int next_x, next_y;
                    for (int k = 0; k < DIR; k++) {
                        next_x = i + dx[k];
                        next_y = j + dy[k];
                        if (InRange(next_x, next_y) && a[next_x][next_y] > max_num) {
                            max_num = a[next_x][next_y];
                        }
                    }
                    if (i != next_x && j != next_y) {
                        marbles[i][j]--;
                        marbles[next_x][next_y]++;
                        flag = true;
                    }
                }
                else marbles[i][j] = 0;
            }
        }
        if (!flag) break;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (marbles[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}