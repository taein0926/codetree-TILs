#include <iostream>
#include <vector>
#include <map>

using namespace std;

int N, M, T;
vector<vector<int>> grid;
vector<pair<int, int>> marbles;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool inRange(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

void simulate() {
    map<pair<int, int>, int> nextPosCount;
    vector<pair<int, int>> newMarbles;

    for (auto [x, y] : marbles) {
        int maxVal = grid[x][y];
        int nx = x, ny = y;

        for (int dir = 0; dir < 4; ++dir) {
            int tx = x + dx[dir];
            int ty = y + dy[dir];
            if (inRange(tx, ty) && grid[tx][ty] > maxVal) {
                maxVal = grid[tx][ty];
                nx = tx;
                ny = ty;
            }
        }

        nextPosCount[{nx, ny}]++;
    }

    for (auto [pos, cnt] : nextPosCount) {
        if (cnt == 1) {
            newMarbles.push_back(pos);
        }
    }

    marbles = newMarbles;
}

int main() {
    cin >> N >> M >> T;

    grid = vector<vector<int>>(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> grid[i][j];

    for (int i = 0; i < M; ++i) {
        int r, c;
        cin >> r >> c;
        marbles.emplace_back(r - 1, c - 1);
    }

    while (T--) {
        simulate();
    }

    cout << marbles.size() << '\n';
    return 0;
}