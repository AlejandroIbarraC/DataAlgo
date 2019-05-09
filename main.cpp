#include <iostream>

#include "algorithms/MathAlgorithms.h"
#include "algorithms/SearchAlgorithms.h"
#include "algorithms/SortAlgorithms.h"
#include "Genetics/Individual.h"
#include "Genetics/Population.h"

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

    cout << "Permutations of " + to_string(size2) + " elements in a set of " + to_string(elem2) + " different elements: " + to_string(nperm2) << endl << endl;

    // C. GREEDY
    cout << "C. Greedy" << endl << endl;

    // MIN.COIN CHANGE
    cout << "1) Minimum coins to change" << endl << endl;

    // Example 1.

    int money1 = 1080;
    cout << "Change " + to_string(money1) + " with the following coins:" << endl;
    MathAlgorithms::minNumberOfCoins(money1);
    cout << endl << endl;

    // Example 2.

    int money2 = 2040;
    cout << "Change " + to_string(money2) + " with the following coins:" << endl;
    MathAlgorithms::minNumberOfCoins(money2);
    cout << endl << endl;

    // EGYPTIAN FRACTIONS
    cout << "2) Egyptian Fractions" << endl << endl;

    // Example 1.

    int num1 = 60;
    int den1 = 140;
    cout << "Egyptian fraction of " + to_string(num1) + "/" + to_string(den1) + " is ";
    MathAlgorithms::egyptianFraction(num1, den1);

    // Example 2.

    int num2 = 7;
    int den2 = 13;
    cout << endl << "Egyptian fraction of " + to_string(num2) + "/" + to_string(den2) + " is ";
    MathAlgorithms::egyptianFraction(num2, den2);

    cout << endl<<endl<<endl;

    // D. GENETIC

    cout<<"Genetic Algorithm\n"<<endl;

    //Population Initialize
    Population *population = new Population();
    population->initializePopulation(2);

    cout<<"Gens of first individual: ";
    population->individuals[0]->showGens();

    cout<<endl<<"Gens of Second individual: ";
    population->individuals[1]->showGens();


    //CrossOver
    cout<<endl<<"CrossOver"<<endl<<endl<<"Gens of children after CrossOver: "<<endl;

    population->crossOver();
    population->individuals[2]->showGens();

    cout<<"\nChild Mutation"<<endl<<"New Gens: "<<endl;

    population->individuals[2]->mutate();
    population->individuals[2]->showGens();


    cout << endl;
    cout << "Goodbye, World!" << endl;
    return 0;
}