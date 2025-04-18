#include <iostream>
using namespace std;

int arr[4][4];

int main() {
    for (int i = 0; i < 4; i++) {
        int sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
            sum += arr[i][j];
		}
        cout << sum << "\n";
	}

    return 0;
}