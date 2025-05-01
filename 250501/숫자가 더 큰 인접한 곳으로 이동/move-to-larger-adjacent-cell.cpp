#include <iostream>

using namespace std;

bool flag = true;
int n;
int r, c;
int max_num, max_x, max_y, iter = 0;
int a[100][100], ans[10000];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool InRange(int x, int y) {
    return (x > 0 && x < n && y > 0 & y < n);
}

int main() {
    cin >> n >> r >> c;
    int cur_x = r-1;
    int cur_y = c-1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    max_num = a[cur_x][cur_y];
    ans[iter] = max_num;
    iter++;

    do {
        for (int i = 0; i < 4; i++) {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];
            if (InRange(next_x, next_y) && a[next_x][next_y] > max_num) {
                cur_x = next_x;
                cur_y = next_y;
                max_num = a[cur_x][cur_y];
                ans[iter] = max_num;
                iter++;
            }
            else flag = false;
        }
    } while (flag);

    for (int i = 0; i < iter; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
