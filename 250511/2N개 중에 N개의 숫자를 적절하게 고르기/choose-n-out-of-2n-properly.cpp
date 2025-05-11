#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
vector<int> a;
int min_diff = 1e9;

void dfs(int idx, vector<int>& selected) {
    if (selected.size() == n) {
        int sumA = 0, sumB = 0;
        vector<bool> is_selected(2 * n, false);
        for (int i : selected) {
            sumA += a[i];
            is_selected[i] = true;
        }
        for (int i = 0; i < 2 * n; ++i) {
            if (!is_selected[i]) sumB += a[i];
        }

        min_diff = min(min_diff, abs(sumA - sumB));
        return;
    }

    if (idx == 2 * n) return;

    selected.push_back(idx);
    dfs(idx + 1, selected);
    selected.pop_back();

    dfs(idx + 1, selected);
}

int main() {
    cin >> n;
    a.resize(2 * n);
    for (int i = 0; i < 2 * n; ++i) cin >> a[i];

    vector<int> selected;
    dfs(0, selected);
    cout << min_diff << "\n";
    return 0;
}
