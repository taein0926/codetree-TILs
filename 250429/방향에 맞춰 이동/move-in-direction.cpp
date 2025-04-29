#include <iostream>

using namespace std;

int x = 0, y = 0, n;
char dir[100];
int dist[100];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'W') {
            x += dist[i] * dx[0];
            y += dist[i] *dy[0];
        }
        else if (dir[i] == 'S') {
            x += dist[i] * dx[1];
            y += dist[i] *dy[1];
        }
        else if (dir[i] == 'N') {
            x += dist[i] * dx[2];
            y += dist[i] *dy[2];
        }
        else if (dir[i] == 'E') {
            x += dist[i] * dx[3];
            y += dist[i] *dy[3];
        }
    }

    cout << x << " " << y;

    return 0;
}