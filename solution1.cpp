#include <iostream>
using namespace std;

int main() {
    // Example array
    int arr[] = {2, 3, 4, 5, 6};

    // Calculate the product
    int product = 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        product *= arr[i];
    }

    // Output the result
    std::cout << "Product of all elements: " << product << std::endl;

    return 0;
}
