#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, H, M;
    cin >> N >> H >> M;
    
    vector<vector<int>> grid(N, vector<int>(N));
    vector<pair<int, int>> people;
    vector<pair<int, int>> shelters;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 2) {
                people.push_back({i, j});
            } else if (grid[i][j] == 3) {
                shelters.push_back({i, j});
            }
        }
    }
    
    vector<vector<int>> result(N, vector<int>(N, -1));
    
    const int dr[] = {-1, 1, 0, 0};
    const int dc[] = {0, 0, -1, 1};
    
    for (const auto& person : people) {
        int start_r = person.first;
        int start_c = person.second;
        
        vector<vector<bool>> visited(N, vector<bool>(N, false));
        queue<pair<pair<int, int>, int>> q;
        
        q.push({{start_r, start_c}, 0});
        visited[start_r][start_c] = true;
        
        bool foundShelter = false;
        
        while (!q.empty() && !foundShelter) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int distance = q.front().second;
            q.pop();
            
            if (grid[r][c] == 3) {
                result[start_r][start_c] = distance;
                foundShelter = true;
                break;
            }
            
            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                
                if (nr >= 0 && nr < N && nc >= 0 && nc < N && !visited[nr][nc] && grid[nr][nc] != 1) {
                    q.push({{nr, nc}, distance + 1});
                    visited[nr][nc] = true;
                }
            }
        }
        
        if (!foundShelter) {
            result[start_r][start_c] = -1;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 2) {
                if (result[i][j] == -1) {
                    cout << "-1 ";
                } else {
                    cout << result[i][j] << " ";
                }
            } else {
                cout << "0 ";
            }
        }
        cout << '\n';
    }
    return 0;
}