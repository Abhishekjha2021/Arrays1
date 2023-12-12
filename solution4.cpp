#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            // Found a duplicate
            return true;
        }
        seen.insert(num);
    }

    // No duplicates found
    return false;
}

int main() {
    // Example array
    std::vector<int> arr = {3, 8, 1, 5, 7, 12, 6, 3};

    if (containsDuplicate(arr)) {
        std::cout << "The array contains duplicates." << std::endl;
    } else {
        std::cout << "The array does not contain duplicates." << std::endl;
    }

    return 0;
}
