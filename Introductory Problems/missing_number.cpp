// Missing Number — Problem Statement

// You are given all numbers between 1, 2, ..., n except one.
// Your task is to find the missing number.

// Input

// The first line contains an integer n

// The second line contains n − 1 distinct integers, each between 1 and n

// Output

// Print the missing number.

// Constraints
// 2 ≤ n ≤ 2 · 10^5

// Example

// Input

// 5
// 2 3 1 5


// Output

// 4

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        sum -= x;
    }

    cout << sum;
    return 0;
}
