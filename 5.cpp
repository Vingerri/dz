#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return -1;

    sort(nums.begin(), nums.end());
    
    int product = 1;
    for (int i = 0; i < k; i++) {
        product *= nums[i];
    }

    return product;
}

int main() {
    vector<int> nums = {1, 10, -5, 1, -100};
    int k = 3;

    int result = maxProduct(nums, k);
    cout << "Maximum product of " << k << " elements: " << result << endl;

    return 0;
}
