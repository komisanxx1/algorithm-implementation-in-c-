#include <iostream>

int binarySearch(const int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target is in the middle
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is less than the middle element, search in the left half
        if (arr[mid] > target) {
            high = mid - 1;
        }

        // If the target is greater than the middle element, search in the right half
        else {
            low = mid + 1;
        }
    }

    // If the target is not found, return -1
    return -1;
}

int main() {
    // Example usage with a sorted array
    int sortedArray[] = {2, 5, 8, 12, 16, 23, 38, 42, 55};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int target = 23;

    int index = binarySearch(sortedArray, size, target);

    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
