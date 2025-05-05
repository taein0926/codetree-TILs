#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> seq;

void PrintAnswer() {
    for (int num : seq) {
        cout << num << " ";
    }
    cout << "\n";
}

void Choose(int num) {
    if (seq.size() == M) {
        PrintAnswer();
        return;
    }

    for (int select = num; select <= N; select++) {
        seq.push_back(select);
        Choose(select + 1);
        seq.pop_back();
    }
}

int main() {
    cin >> N >> M;
    Choose(1);
    return 0;
}