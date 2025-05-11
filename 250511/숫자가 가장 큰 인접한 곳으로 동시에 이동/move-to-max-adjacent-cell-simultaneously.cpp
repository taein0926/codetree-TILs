#include <iostream>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

int N, M, T;
vector<vector<int>> board;
vector<pair<int, int>> marbles;

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

bool is_in(int r, int c) {
    return r >= 0 && r < N && c >= 0 && c < N;
}

void simulate() {
    for (int t = 0; t < T; ++t) {
        map<pair<int, int>, int> target_count;
        vector<pair<int, int>> next_positions;

        for (auto [r, c] : marbles) {
            int max_val = -1;
            pair<int, int> target = {r, c};

            for (int d = 0; d < 4; ++d) {
                int nr = r + dr[d];
                int nc = c + dc[d];
                if (is_in(nr, nc)) {
                    if (board[nr][nc] > max_val) {
                        max_val = board[nr][nc];
                        target = {nr, nc};
                    }
                }
            }

            next_positions.push_back(target);
            target_count[target]++;
        }

        vector<pair<int, int>> new_marbles;
        for (int i = 0; i < marbles.size(); ++i) {
            if (target_count[next_positions[i]] == 1) {
                new_marbles.push_back(next_positions[i]);
            }
        }

        marbles = new_marbles;
    }
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

    simulate();
    cout << marbles.size() << "\n";
    return 0;
}