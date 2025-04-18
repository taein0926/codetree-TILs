#include <iostream>
using namespace std;

int n;
int price[1000];
int profit = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (price[i] < price[j] && price[j] - price[i] > profit) profit = price[j] - price[i];
        }
        
    }
    cout << profit;

    return 0;
}
