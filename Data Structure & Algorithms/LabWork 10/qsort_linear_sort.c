/*
    Date: 23 November 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C Using the QSORT function to Implement Linear Sorting on the Given Array Elements.
*/

// Algorithm:
/*
Step 1: Define a comparison function for qsort.
Step 2: Create an array of elements to sort.
Step 3: Use the qsort function to sort the array.
Step 4: Display the sorted array.
Step 5: End the program.
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {45, 12, 9, 33, 7, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    qsort(arr, n, sizeof(int), compare);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
