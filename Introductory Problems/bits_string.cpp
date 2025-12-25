// CSES Problem: Bit Strings
// Task

// You are given an integer n.
// Your job is to calculate how many bit strings of length n exist.

// A bit string is a sequence made using only:

// 0

// 1

// For example, when n = 3, these 8 bit strings are possible:

// 000
// 001
// 010
// 011
// 100
// 101
// 110
// 111


// So the answer is 8.

// Input

// A single integer:

// n

// Output

// Print:

// (number of bit strings of length n)
// m
// o
// d
//  
//  
// (
// 10
// 9
// +
// 7
// )
// (number of bit strings of length n)mod(10
// 9
// +7)
// Constraints
// 1
// ≤
// 𝑛
// ≤
// 10
// 6
// 1≤n≤10
// 6
// Example

// Input:

// 3


// Output:

// 8

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MOD = 1000000007;
    long long ans = 1;

    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;
    }

    cout << ans;
    return 0;
}
