#include <iostream>
#include <vector>

#define DIR 2

using namespace std;

int n, m;
int dx[DIR] = { 0, 1 };
int dy[DIR] = { 1, 0 };
vector<vector<int>> grid;
vector<vector<bool>> visited;

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool dfs(int x, int y) {
    if (x == n - 1 && y == m - 1) {
        return true;
    }
    
    visited[x][y] = true;
    
    for (int i = 0; i < DIR; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (InRange(nx, ny) && grid[nx][ny] == 1 && !visited[nx][ny]) {
            if (dfs(nx, ny)) {
                return true;
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
    
    bool canEscape = dfs(0, 0);
    
    if (canEscape) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
    return 0;
}