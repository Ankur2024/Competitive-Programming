// CSES — Increasing Array
// Task

// You are given an array of n integers. You want to modify the array so that it becomes increasing, meaning each element is at least as large as the previous one.

// On each move, you may increase the value of any element by 1.
// Your task is to find the minimum number of moves required to make the array increasing.

// Input

// The first line contains an integer n: the size of the array.

// The second line contains n integers

// 𝑥
// 1
// ,
// 𝑥
// 2
// ,
// …
// ,
// 𝑥
// 𝑛
// x
// 1
// 	​

// ,x
// 2
// 	​

// ,…,x
// n
// 	​

// : the contents of the array.

// Output

// Print a single integer: the minimum number of moves required.

// Constraints

// 1
// ≤
// 𝑛
// ≤
// 2
// ⋅
// 10
// 5
// 1≤n≤2⋅10
// 5

// 1
// ≤
// 𝑥
// 𝑖
// ≤
// 10
// 9
// 1≤x
// i
// 	​

// ≤10
// 9

// Example

// Input

// 5
// 3 2 5 1 7


// Output

// 5


#include <iostream>
#include <vector>
using namespace std;

long long increasing_array(int n, vector<int> &arr) {
    long long moves = 0;
    long long prev = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < prev){
            moves += prev - arr[i];
        } else {
            prev = arr[i];
        }
    }
    return moves;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << increasing_array(n, arr) << endl;
    return 0;
}
