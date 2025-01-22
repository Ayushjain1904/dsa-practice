#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids overflow

        // Check if the key is at mid
        if (arr[mid] == key) {
            return mid; // Key found
        }
        // If key is greater, ignore the left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        // If key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Key not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
