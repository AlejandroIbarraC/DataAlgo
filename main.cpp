#include <iostream>

#include "algorithms/MathAlgorithms.h"
#include "algorithms/SearchAlgorithms.h"
#include "algorithms/SortAlgorithms.h"

using namespace std;
int main() {

    cout << "Welcome to Data&Algo!" << endl << endl;

    // A. DIVIDE & CONQUER
    cout << "A. Divide & Conquer:" << endl << endl;

    // BINARY SEARCH
    cout << "1) Binary Search" << endl << endl;

    // Example 1.

    // Define and print array
    int arr[] = {3, 4, 5, 11, 41};
    cout << "[" + to_string(arr[0]) + ", "
        << to_string(arr[1]) + ", "
        << to_string(arr[2]) + ", "
        << to_string(arr[3]) + ", "
        << to_string(arr[4]) + "]" << endl;

    // x to find
    int x = 11;

    cout << "Value to find: " + to_string(x) << endl;
    int arrlen = sizeof(arr) / sizeof(arr[0]) - 1;
    int xIndex = SearchAlgorithms::binarySearch(arr, arrlen, x);
    cout << "X in position: " + to_string(xIndex) << endl << endl;

    // Example 2.

    // Define and print array
    int arr2[] = {13, 21, 42, 100, 230, 1000};
    cout << "[" + to_string(arr2[0]) + ", "
         << to_string(arr2[1]) + ", "
         << to_string(arr2[2]) + ", "
         << to_string(arr2[3]) + ", "
         << to_string(arr2[4]) + ", "
         << to_string(arr2[5]) + "]" << endl;

    // x to find
    int x2 = 230;

    cout << "Value to find: " + to_string(x2) << endl;
    int arrayLength2 = sizeof(arr2) / sizeof(arr2[0]) - 1;
    int xIndex2 = SearchAlgorithms::binarySearch(arr2, arrayLength2, x2);
    cout << "X in position: " + to_string(xIndex2) << endl << endl;

    // QUICKSORT
    cout << "2) Quicksort" << endl << endl;

    // Example 1.

    // Define and print array.
    int arr3[] = {50, 14, 10, 81, 2, 58};
    cout << "Original array: " << endl
         << "[" + to_string(arr3[0]) + ", "
         << to_string(arr3[1]) + ", "
         << to_string(arr3[2]) + ", "
         << to_string(arr3[3]) + ", "
         << to_string(arr3[4]) + ", "
         << to_string(arr3[5]) + "]" << endl;
    int arrayLength3 = sizeof(arr3)/sizeof(arr3[0]);

    // Sort array and print it.
    SortAlgorithms::quickSort(arr3, 0, arrayLength3 - 1);

    cout << "Sorted array: " << endl
         << "[" + to_string(arr3[0]) + ", "
         << to_string(arr3[1]) + ", "
         << to_string(arr3[2]) + ", "
         << to_string(arr3[3]) + ", "
         << to_string(arr3[4]) + ", "
         << to_string(arr3[5]) + "]" << endl << endl;

    // Example 2.

    // Define and print array.
    int arr4[] = {3, 1, 943, 23, 99, 9};
    cout << "Original array: " << endl
         << "[" + to_string(arr4[0]) + ", "
         << to_string(arr4[1]) + ", "
         << to_string(arr4[2]) + ", "
         << to_string(arr4[3]) + ", "
         << to_string(arr4[4]) + ", "
         << to_string(arr4[5]) + "]" << endl;
    int arrayLength4 = sizeof(arr4)/sizeof(arr4[0]);

    // Sort array and print it.
    SortAlgorithms::quickSort(arr4, 0, arrayLength4 - 1);

    cout << "Sorted array: " << endl
         << "[" + to_string(arr4[0]) + ", "
         << to_string(arr4[1]) + ", "
         << to_string(arr4[2]) + ", "
         << to_string(arr4[3]) + ", "
         << to_string(arr4[4]) + ", "
         << to_string(arr4[5]) + "]" << endl << endl;

    // B. DYNAMIC PROGRAMMING
    cout << "B. Dynamic Programming:" << endl << endl;

    // FIBONACCI
    cout << "1) Fibonacci sequence" << endl << endl;

    // Example 1.

    int n1 = 6;
    int fib1 = MathAlgorithms::fib(n1);
    cout << "Fibonacci of " + to_string(n1) + " is " + to_string(fib1) << endl;

    // Example 2.

    int n2 = 10;
    int fib2 = MathAlgorithms::fib(n2);
    cout << "Fibonacci of " + to_string(n2) + " is " + to_string(fib2) << endl << endl;

    // NUMBER OF PERMUTATIONS
    cout << "2) Number of permutations" << endl << endl;

    // Example 1.

    int elem1 = 4;
    int size1 = 2;
    int nperm1 = MathAlgorithms::numberOfPermutations(elem1, size1);

    cout << "Permutations of " + to_string(size1) + " elements in a set of " + to_string(elem1) + " different elements: " + to_string(nperm1) << endl;

    // Example 2.

    int elem2 = 15;
    int size2 = 3;
    int nperm2 = MathAlgorithms::numberOfPermutations(elem2, size2);

    cout << "Permutations of " + to_string(size2) + " elements in a set of " + to_string(elem2) + " different elements: " + to_string(nperm2) << endl;

    // C. GENETIC

    // D. GREEDY

    cout << endl;
    cout << "Goodbye, World!" << endl;
    return 0;
}