//
// Created by Alejandro Ibarra on 2019-05-06.
//

#include "MathAlgorithms.h"

/// Calculates Fibonacci number using dynamic programming to store results.
/// @param int n number to fibonacci
int MathAlgorithms::fib(int n) {
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

int MathAlgorithms::numberOfPermutations(int n, int x) {
    int P[n + 1][x + 1];

    // Caculate value of Permutation
    // Coefficient in bottom up manner
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= std::min(i, x); j++)
        {
            // Base Cases
            if (j == 0)
                P[i][j] = 1;

                // Calculate value using
                // previosly stored values
            else
                P[i][j] = P[i - 1][j] +
                          (j * P[i - 1][j - 1]);

            // This step is important
            // as P(i,j)=0 for j>i
            P[i][j + 1] = 0;
        }
    }
    return P[n][x];
}