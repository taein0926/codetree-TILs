#include <iostream>
using namespace std;

int arr[2][4];
int sum;
double avg;

int main() {
    for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
        avg = sum / 4;
        cout << avg << " ";
	}
    cout << "\n";

    for (int i = 0; i < 4; i++) {
        sum = 0;
		for (int j = 0; j < 2; j++) {
			sum += arr[j][i];
		}
        avg = sum / 2;
        cout << avg << " ";
	}
    cout << "\n";
    
    sum = 0;
    for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
	}
    avg = sum / 8;
    cout << avg;
    return 0;
}