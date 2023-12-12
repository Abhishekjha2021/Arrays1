#include <iostream>
#include <climits>

int main() {
    // Example array
    int arr[] = {3, 8, 1, 5, 7, 12, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return 1;  // Exit with an error code
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        std::cerr << "There is no second largest element." << std::endl;
    } else {
        std::cout << "Second largest element: " << secondLargest << std::endl;
    }

    return 0;
}
