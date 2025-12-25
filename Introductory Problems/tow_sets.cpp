// CSES Problem: Two Sets
// Task

// You are given the numbers 1, 2, 3, …, n.
// Your task is to divide them into two sets such that the sum of elements in both sets is equal.

// Input

// A single integer:
// n

// Output

// Print "YES" if such a division is possible; otherwise print "NO".

// If possible:

// First print the number of elements in Set 1 and then the elements.

// Then print the number of elements in Set 2 and the elements.

// Constraints

// 1 ≤ n ≤ 10^6

// Example 1

// Input:

// 7


// Output:

// YES
// 4
// 1 2 4 7
// 3
// 3 5 6

// Example 2

// Input:

// 6


// Output:

// NO

#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long S = n * (n + 1) / 2;

    if (S % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = S / 2;

    vector<int> a, b;
    
    for (long long i = n; i >= 1; i--) {
        if (i <= target) {
            a.push_back(i);
            target -= i;
        } else {
            b.push_back(i);
        }
    }

    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n";

    cout << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";

    return 0;
}
