// Weird Algorithm — Problem Statement

// Consider an algorithm that takes a positive integer n as input:

// If n is even, divide it by 2

// If n is odd, multiply it by 3 and add 1

// Repeat this process until n becomes 1.

// For example, for n = 3, the sequence produced is:

// 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1

// Input

// A single integer n
// (1 ≤ n ≤ 10⁶)

// Output

// Print all values of n encountered during the algorithm, including the initial and final value, in one line, separated by spaces.

// Example
// Input
// 3

// Output
// 3 10 5 16 8 4 2 1


#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }

    cout << 1;
    return 0;
}
