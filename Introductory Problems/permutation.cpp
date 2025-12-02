// CSES — Permutations
// Task

// A permutation of integers 
// 1
// ,
// 2
// ,
// …
// ,
// 𝑛
// 1,2,…,n is called beautiful if no two adjacent elements differ by 1.

// Given an integer 
// 𝑛
// n, your task is to construct any beautiful permutation or determine that none exists.

// Input

// A single integer:

// n

// Output

// Print a beautiful permutation of integers 
// 1
// ,
// 2
// ,
// …
// ,
// 𝑛
// 1,2,…,n.

// If multiple valid solutions exist, you may print any.

// If no such permutation exists, print:

// NO SOLUTION

// Constraints

// 1
// ≤
// 𝑛
// ≤
// 10
// 6
// 1≤n≤10
// 6

// Examples
// Example 1

// Input:

// 5


// Output:

// 4 2 5 3 1

// Example 2

// Input:

// 3


// Output:

// NO SOLUTION


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
    } else {
        for (int i = 2; i <= n; i += 2) cout << i << " ";
        for (int i = 1; i <= n; i += 2) cout << i << " ";
        cout << "\n";
    }

    return 0;
}
