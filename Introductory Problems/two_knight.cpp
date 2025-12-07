// Two Knights

// Time limit: 1.00 s
// Memory limit: 512 MB

// Task

// For every integer 
// 𝑘
// =
// 1
// ,
// 2
// ,
// …
// ,
// 𝑛
// k=1,2,…,n compute the number of ways to place two knights on a 
// 𝑘
// ×
// 𝑘
// k×k chessboard so that they do not attack each other.

// Two knights attack each other if one can move to the other's square with a standard chess knight move (an L-shape: two squares in one direction and one square perpendicular).

// Input

// A single integer:

// n


// Constraints: 
// 1
// ≤
// 𝑛
// ≤
// 10000
// 1≤n≤10000

// Output

// Print 
// 𝑛
// n integers (one per line). The 
// 𝑖
// i-th printed integer should be the answer for a 
// 𝑖
// ×
// 𝑖
// i×i board (for 
// 𝑖
// =
// 1
// i=1 to 
// 𝑛
// n).

// Example

// Input

// 8


// Output

// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848


#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        long long total = (k * k) * (k * k - 1) / 2;
        long long attack = 4 * (k - 1) * (k - 2);
        cout << total - attack << "\n";
    }

    return 0;
}