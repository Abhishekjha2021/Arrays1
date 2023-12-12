#include <iostream>
#include <vector>

int findSmallestMissingPositive(const std::vector<int>& nums) {
    int n = nums.size();
    int expected = 1; // Start with the smallest positive integer

    for (int i = 0; i < n; ++i) {
        if (nums[i] == expected) {
            // If the current element matches the expected positive integer, move to the next
            expected++;
        } else if (nums[i] > expected) {
            // If the current element is greater than the expected positive integer,
            // then expected is the smallest missing positive integer
            return expected;
        }
    }

    // If all positive integers are present, return the next positive integer
    return expected;
}

int main() {
    // Example sorted array with positive elements
    std::vector<int> arr = {1, 2, 3, 5, 7, 8, 10};

    int result = findSmallestMissingPositive(arr);

    std::cout << "Smallest missing positive element: " << result << std::endl;

    return 0;
}
