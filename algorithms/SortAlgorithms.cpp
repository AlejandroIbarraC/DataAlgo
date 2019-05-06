//
// Created by Alejandro Ibarra on 2019-05-06.
//

#include "SortAlgorithms.h"

/// Takes last element as pivot, places it in correct position in sorted array, and partitions main array.
/// @param int arr[] unsorted array
/// @param int start starting index
/// @param int end end index
int SortAlgorithms::partition (int array[], int start, int end) {
    int pivot = array[end];
    int i = (start - 1);

    // Covers the whole array to swap if necessary
    for (int j = start; j <= end- 1; j++) {
        // Checks if element is smaller or bigger than pivot
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    // Swap values
    swap(&array[i + 1], &array[end]);
    return (i + 1);
}

/// Applies Quicksort algorithm to unsorted array.
/// @param int arr[] unsorted array
/// @param int start starting index
/// @param int end end index
void SortAlgorithms::quickSort(int array[], int start, int end) {
    if (start < end) {
        // Define partition index in array
        int pivotIndex = partition(array, start, end);

        // Apply Quicksort to left and right halves, start recursion.
        quickSort(array, start, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, end);
    }
}

/// Swaps two int values.
/// @param int a value to swap with b
/// @param int b value to be swapped
void SortAlgorithms::swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y= temp;
}