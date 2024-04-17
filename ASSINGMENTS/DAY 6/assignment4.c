//Question 4:Find a partition point in array Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.//Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element.
//Examples :
Input : A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5
Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1

#include <stdio.h>

int findPartitionPoint(int arr[], int n) {
    int leftMax[n], rightMin[n];
    int maxSoFar = arr[0], minSoFar = arr[n - 1];

    // Fill leftMax array
    for (int i = 0; i < n; i++) {
        maxSoFar = (arr[i] > maxSoFar) ? arr[i] : maxSoFar;
        leftMax[i] = maxSoFar;
    }

    // Fill rightMin array
    for (int i = n - 1; i >= 0; i--) {
        minSoFar = (arr[i] < minSoFar) ? arr[i] : minSoFar;
        rightMin[i] = minSoFar;
    }

    // Check for valid partition point
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= leftMax[i] && arr[i] <= rightMin[i]) {
            return arr[i];
        }
    }

    return -1; // No valid partition point found
}

int main() {
    int arr[] = {4, 3, 2, 5, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int partitionPoint = findPartitionPoint(arr, n);
    printf("Partition Point: %d\n", partitionPoint);

    return 0;
}

