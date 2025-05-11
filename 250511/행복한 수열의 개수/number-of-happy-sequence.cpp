#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; ++i) {
        int streak = 1;
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == grid[i][j - 1])
                ++streak;
            else
                streak = 1;

            if (streak == m) {
                ++count;
                break;
            }
        }
    }

    for (int j = 0; j < n; ++j) {
        int streak = 1;
        for (int i = 1; i < n; ++i) {
            if (grid[i][j] == grid[i - 1][j])
                ++streak;
            else
                streak = 1;

            if (streak == m) {
                ++count;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}