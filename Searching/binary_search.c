// Problem: Binary Search
// Category: Searching
// Approach: Divide and Conquer
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    int i;   // ? FIX: declared outside loop

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
