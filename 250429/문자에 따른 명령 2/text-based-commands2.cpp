#include <iostream>
#include <string>
using namespace std;

int x = 0, y = 0, dir = 3;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
string q;

int main() {
    cin >> q;

    for (int i=0; i<q.length(); i++) {
        if (q[i] == 'L') {
            dir = (dir - 1 + 4) % 4;
        }
        else if (q[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << " " << y;
    return 0;
}