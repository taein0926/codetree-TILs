#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> seq;
vector<bool> visited;

void PrintAnswer() {
    for (int num : seq) {
        cout << num << " ";
    }
    cout << "\n";
}

void Choose() {
    if (seq.size() == N) {
        PrintAnswer();
        return;
    }

    for (int select = 1; select <= N; select++) {
        if (!visited[select]) {
            visited[select] = true;
            seq.push_back(select);
            Choose();
            seq.pop_back();
            visited[select] = false;
        }
    }
}

int main() {
    cin >> N;
    visited.resize(N + 1, false);
    Choose();
    return 0;
}