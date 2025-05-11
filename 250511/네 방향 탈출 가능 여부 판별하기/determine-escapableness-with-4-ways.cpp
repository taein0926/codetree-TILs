#include <iostream>
#include <vector>
#include <queue>

#define DIR 4

using namespace std;

int n, m;
int dx[DIR] = {-1, 1, 0, 0};
int dy[DIR] = {0, 0, -1, 1};
vector<vector<int>> grid;
vector<vector<bool>> visited;

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool bfs() {
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if (x == n - 1 && y == m - 1) {
            return true;
        }
        
        for (int i = 0; i < DIR; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (InRange(nx, ny) && grid[nx][ny] == 1 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    
    return false;
}

int main() {
    cin >> n >> m;
    grid.resize(n, vector<int>(m));
    visited.resize(n, vector<bool>(m, false));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    bool canEscape = bfs();
    
    cout << (canEscape ? 1 : 0) << "\n";
    
    return 0;
}