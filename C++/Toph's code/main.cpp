#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {5, 2, 8, 1, 9};

    std::sort(nums.begin(), nums.end());

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
