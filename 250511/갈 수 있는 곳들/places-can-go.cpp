#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<vector<int>> grid(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    
    vector<pair<int, int>> startPoints(K);
    for (int i = 0; i < K; i++) {
        int r, c;
        cin >> r >> c;
        startPoints[i] = {r - 1, c - 1};
    }
    
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    
    const int dr[] = {-1, 1, 0, 0};
    const int dc[] = {0, 0, -1, 1};
    
    queue<pair<int, int>> q;
    
    for (const auto& point : startPoints) {
        int r = point.first;
        int c = point.second;
        
        if (r >= 0 && r < N && c >= 0 && c < N && grid[r][c] == 0) {
            q.push({r, c});
            visited[r][c] = true;
        }
    }
    
    int reachableCount = 0;
    
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        
        reachableCount++;
        
        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            if (nr >= 0 && nr < N && nc >= 0 && nc < N && !visited[nr][nc] && grid[nr][nc] == 0) {
                q.push({nr, nc});
                visited[nr][nc] = true;
            }
        }
    }
    
    cout << reachableCount << '\n';
    return 0;
}