
void insertionSortRecursive(int arr[], int n) {
    // Base case: if array size is 1 or less, it is already sorted
    if (n <= 1) {
        return;
    }

    // Recursively sort the first n-1 elements of the array
    insertionSortRecursive(arr, n-1);

    // Insert the last element of the unsorted part into the sorted part
    int last = arr[n-1];
    int j = n-2;

    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}
