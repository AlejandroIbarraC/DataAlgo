//
// Created by Alejandro Ibarra on 2019-05-06.
//

#include <iostream>

#include "SearchAlgorithms.h"

using namespace std;

/// Applies Binary Search algorithm to sorted array.
/// @param int array[] array to sort
/// @param int length length of array
/// @param int toFind value to search for
int SearchAlgorithms::binarySearch(int array[], int length, int toFind) {
    int i = 0;
    while (i <= length) {
        int midPos = i + (length - i) / 2;

        // If value is at mid position
        if (array[midPos] == toFind) {
            return midPos;
        }

        // If value is greater, remove left half
        if (array[midPos] < toFind) {
            i = midPos + 1;
        }

        // If value is smaller, remove right half
        else {
            length = midPos - 1;
        }
    }

    // Value not found
    return -1;
}