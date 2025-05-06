#include <iostream>
#include <vector>

using namespace std;

int N;
bool visited[9] = { false, };
vector<int> seq;

void PrintAnswer() {
    for (int num : seq) {
        cout << num << " ";
    }
    cout << "\n";
}

void Choose(int num) {
    if (num == N+1) {
        PrintAnswer();
        return;
    }

    for (int select = 1; select <= N; select++) {
        if (visited[select]) continue;

        visited[select] = true;
        seq.push_back(select);

        Choose(num + 1);
        
        seq.pop_back();
        visited[select] = false;
    }
}

int main() {
    cin >> N;
    Choose(1);
    return 0;
}