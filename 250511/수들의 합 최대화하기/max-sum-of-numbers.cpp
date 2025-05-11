#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_N = 10;
const int INF = 1e9;

int n;
int grid[MAX_N][MAX_N];
bool assigned_row[MAX_N];
bool assigned_col[MAX_N];
int matching[MAX_N];
int max_sum = 0;

void solve(int row, int current_sum) {
    if (row == n) {
        max_sum = max(max_sum, current_sum);
        return;
    }
    
    for (int col = 0; col < n; col++) {
        if (!assigned_col[col]) {
            assigned_col[col] = true;
            solve(row + 1, current_sum + grid[row][col]);
            assigned_col[col] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    solve(0, 0);
    
    cout << max_sum << "\n";
    return 0;
}