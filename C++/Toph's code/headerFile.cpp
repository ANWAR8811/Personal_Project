#include <bits/stdc++.h>

int main() {
    std::vector<int> nums = {5, 2, 8, 1, 9};

    // Sort the vector
    std::sort(nums.begin(), nums.end());

    // Print the sorted vector
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
