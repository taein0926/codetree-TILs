#include <iostream>
using namespace std;

int main() {
    int a[10] = {0,};
    int sum=0;
    float avg=0, num=0;
    for (int i=0; i<10; i++) {
        cin >> a[i];
    }
    for (int i=1; i<10; i+=2) {
        sum += a[i];
    }
    for (int i=2; i<10; i+=3) {
        avg += a[i];
        num++;
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg/num;
    return 0;
}
