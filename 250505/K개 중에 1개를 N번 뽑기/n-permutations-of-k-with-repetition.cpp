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
        seq.push_back(select);
        Choose(num + 1);
        seq.pop_back();
    }

    return;
}

int main() {
    cin >> K >> N;
    Choose(0);
    return 0;
}
