#include <iostream>
using namespace std;

int main() {
    int a[10] = {0, };
    for (int i=0; i<10; i++) {
        cin >> a[i];
    }
    cout<<a[2]+a[4]+a[9];
    return 0;
}