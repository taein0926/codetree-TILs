#include <iostream>
#include <string>
using namespace std;

char arr[5][3];
string change;

int main() {
    for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
            arr[i][j] -= 32;
            cout << arr[i][j] << " ";
		}
        cout << "\n";
	}
    return 0;
}