#include <iostream>
using namespace std;

// Linear search function
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // Element not found
}

// Binary search function
int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    // Linear search
    int linearIndex = linearSearch(arr, n, x);
    if (linearIndex == -1) {
        cout << "Element not found using linear search." << endl;
    } else {
        cout << "Element found at index " << linearIndex << " using linear search." << endl;
    }

    // Binary search
    int binaryIndex = binarySearch(arr, n, x);
    if (binaryIndex == -1) {
        cout << "Element not found using binary search." << endl;
    } else {
        cout << "Element found at index " << binaryIndex << " using binary search." << endl;
    }

    return 0;
}
