#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(vector<int>& coins, int amount) {
    sort(coins.rbegin(), coins.rend());

    int count = 0;
    for (int coin : coins) {
        if (amount >= coin) {
            count += amount / coin;
            amount %= coin;
        }
    }

    if (amount == 0) {
        return count;
    } else {
        return -1;
    }
}

int main() {
    vector<int> coins = {1, 5, 10, 25};
    int amount = 30;

    int result = minCoins(coins, amount);

    if (result != -1) {
        cout << "Minimum coins required: " << result << endl;
    } else {
        cout << "Not possible to form the amount" << endl;
    }

    return 0;
}
