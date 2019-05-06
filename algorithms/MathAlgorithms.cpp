//
// Created by Alejandro Ibarra on 2019-05-06.
//

#include "MathAlgorithms.h"

/// Calculates Fibonacci number using dynamic programming to store results.
/// @param int n number to fibonacci
int fib(int n) {
    // Results are stored in array
    int f[n+2];
    int i;

    // Default 0 and 1 as first two values in sequence
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++) {
        // Iteratively add next number in sequence
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}