#include <iostream>

using namespace std;

int N;
int a[1000];
int Max = 0, Mnum = 0;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int iter = N;
    
    while (Mnum != 1) {
        Max = 0;
        for (int i = 0; i < iter; i++) {
            if (a[i] > Max) {
                Max = a[i];
                Mnum = i + 1;
            }
        }
        iter = Mnum - 1;
        cout << Mnum << " ";
    }

    return 0;
}
