#include <iostream>
#include <vector>
#include <map>

using namespace std;

int N, M, T;
vector<vector<int>> board;
vector<pair<int, int>> marbles;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool inRange(int x, int y) {
    return 0 <= x && x < N && 0 <= y && y < N;
}

void simulate() {
    map<pair<int, int>, int> position_count;
    vector<pair<int, int>> next_positions;

    for (auto [x, y] : marbles) {
        int maxVal = board[x][y];
        vector<pair<int, int>> candidates;

        for (int dir = 0; dir < 4; ++dir) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (inRange(nx, ny)) {
                if (board[nx][ny] > maxVal) {
                    maxVal = board[nx][ny];
                    candidates.clear();
                    candidates.emplace_back(nx, ny);
                } else if (board[nx][ny] == maxVal) {
                    candidates.emplace_back(nx, ny);
                }
            }
        }

        if (!candidates.empty()) {
            auto [nx, ny] = candidates[0];
            next_positions.emplace_back(nx, ny);
            position_count[{nx, ny}]++;
        } else {
            next_positions.emplace_back(x, y);
            position_count[{x, y}]++;
        }
    }

    vector<pair<int, int>> survived;
    for (auto pos : next_positions) {
        if (position_count[pos] == 1) {
            survived.push_back(pos);
        }
    }

    marbles = survived;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> T;
    board.assign(N, vector<int>(N));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];

    for (int i = 0; i < M; ++i) {
        int r, c;
        cin >> r >> c;
        marbles.emplace_back(r - 1, c - 1);
    }

    for (int t = 0; t < T; ++t) {
        simulate();
    }

    cout << marbles.size() << '\n';
    return 0;
}