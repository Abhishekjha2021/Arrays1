#include <iostream>
#include <climits>

int main() {
    // Example array
    int arr[] = {3, 8, 1, 5, 7, 12, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {
        std::cerr << "Array is empty." << std::endl;
        return 1;  // Exit with an error code
    }

    int minValue = INT_MAX; // Initialize to maximum possible value

    for (int i = 0; i < n; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }

    std::cout << "Minimum value: " << minValue << std::endl;

    return 0;
}
