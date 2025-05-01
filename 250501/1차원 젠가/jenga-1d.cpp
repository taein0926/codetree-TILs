#include <iostream>

using namespace std;

int n;
int blocks[100];
int s1, e1;
int s2, e2;

void DeleteBlock(int a, int b) {
    int  tmp[100], iter = 0;
    for (int i = 0; i < n; i++) {
        if (i < a-1 || i > b-1) {
            tmp[iter] = blocks[i];
            iter++;
        }
    }

    for (int i = 0; i < iter; i++) {
        blocks[i] = tmp[i];
    }
    n -= b-a+1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    cin >> s1 >> e1;
    cin >> s2 >> e2;

    DeleteBlock(s1, e1);
    DeleteBlock(s2, e2);

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << blocks[i] << "\n";
    }

    return 0;
}
