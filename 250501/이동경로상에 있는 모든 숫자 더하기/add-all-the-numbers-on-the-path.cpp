#include <iostream>
#include <string>
using namespace std;

int n, t, x, y, dir = 2, result = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
string req;

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    cin >> n >> t;
    cin >> req;
    int arr[n][n] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    x = n / 2;
    y = n / 2;
    result += arr[x][y];

    for (int i=0; i<req.length(); i++) {
        if (req[i] == 'L') {
            dir = (dir - 1 + 4) % 4;
        }
        else if (req[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (InRange(nx, ny)) {
                x += dx[dir];
                y += dy[dir];
                result += arr[x][y];
            }
        }
    }

    cout << result;
    return 0;
}