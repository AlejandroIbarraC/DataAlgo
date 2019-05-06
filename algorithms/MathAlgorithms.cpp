//
// Created by Alejandro Ibarra on 2019-05-06.
//

#include "MathAlgorithms.h"

using namespace std;

void MathAlgorithms::egyptianFraction(int num, int den) {
    // Numerator or denominator 0
    if (den == 0 || num == 0) {
        return;
    }
    // Numerator divides denominator, unit fraction
    if (den % num == 0) {
        cout << "1/" << den/num;
        return;
    }
    // Denominator divides numerator, not a fraction
    if (num%den == 0) {
        cout << num/den;
        return;
    }
    // Numerator higher than denominator
    if (num > den) {
        cout << num/den << " + ";
        egyptianFraction(num % den, den);
        return;
    }

    int n = den/num + 1;
    cout << "1/" << n << " + ";

    egyptianFraction(num * n - den, den * n);
}

/// Calculates Fibonacci number using dynamic programming to store results.
/// @param int n number to Fibonacci
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

/// Finds the minimum number of coins to provide change.
/// @param int n total money amount to provide change for
void MathAlgorithms::minNumberOfCoins(int n) {
    int coins[] = {5, 10, 25, 100, 500};
    int coinsSize = sizeof(coins) / sizeof(coins[0]);
    vector<int> result;

    for (int i = coinsSize - 1; i >= 0; i--) {
        // Find coins
        while (n >= coins[i]) {
            n -= coins[i];
            result.push_back(coins[i]);
        }
    }

    // Prints result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}

/// Finds the number of permutations. Combinations of x elements in a total of n different elements.
/// @param int n total of different elements
/// @param int x combination size
int MathAlgorithms::numberOfPermutations(int n, int x) {
    int P[n + 1][x + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= std::min(i, x); j++) {
            if (j == 0) {
                P[i][j] = 1;
            }
            // Value is calculated with stored values.
            else {
                P[i][j] = P[i - 1][j] + (j * P[i - 1][j - 1]);
            }
            P[i][j + 1] = 0;
        }
    }
    return P[n][x];
}