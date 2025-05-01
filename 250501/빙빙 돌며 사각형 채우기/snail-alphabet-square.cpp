#include <iostream>
using namespace std;

int n, m, x = 0, y = 0, dir = 0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char word = 'A';

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    cin >> n >> m;
    char arr[n][m] = {};
    arr[x][y] = word;

    for (int i = 2; i<=n*m; i++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny) || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }
        
        x = x + dx[dir];
        y = y + dy[dir];

        word++;
        if (word == 'Z' + 1) {
            word = 'A';
        }
        arr[x][y] = word;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}