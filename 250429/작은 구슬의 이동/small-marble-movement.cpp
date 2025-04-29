#include <iostream>

using namespace std;

int n, t;
int r, c, nx, ny;
char d;
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

bool InRange(int x, int y) {
    return (0 < x && x < n && 0 < y && y < n);
}

int GetDir(char a) {
    if(a == 'R')
        return 0;
    else if(a == 'D')
        return 1;
    else if(a == 'U')
        return 2;
    else
        return 3;
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int dir = GetDir(d);

    for (int i=0; i<t; i++) {
        nx = r + dx[dir];
        ny = c + dy[dir];
        if (InRange(nx, ny)) {
            r = nx;
            c = ny;
        }
        else {
            dir = 3 - dir;
        }
    }
    cout << r << " " << c;
    return 0;
}