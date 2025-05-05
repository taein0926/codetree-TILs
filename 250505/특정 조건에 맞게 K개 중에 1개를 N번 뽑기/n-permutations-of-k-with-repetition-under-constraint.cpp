#include <iostream>
#include <vector>

using namespace std;

int K, N;
vector<int> seq;

void PrintAnswer() {
    for (int num : seq) {
        cout << num << " ";
    }
    cout << "\n";
}

void Choose(int num) {
    if (num == N) {
        PrintAnswer();
        return;
    }

    for (int select = 1; select <= K; select++) {
        if (num >= 2 && seq[num-1] == select && seq[num-2] == select) {
            continue;
        }
        seq.push_back(select);
        Choose(num + 1);
        seq.pop_back();
    }
}

int main() {
    cin >> K >> N;
    Choose(0);
    return 0;
}
