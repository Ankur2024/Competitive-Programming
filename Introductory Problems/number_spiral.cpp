// CSES — Number Spiral
// Task

// A number spiral is an infinite grid that is filled with integers in a spiral pattern starting from 1 in the upper-left corner. (The pattern forms concentric square “layers”.)
// Your task is: given coordinates (y, x) (row y, column x, 1-indexed), determine the number that appears at that cell.

// Input

// The first line contains an integer t — the number of test cases.

// Then follow t lines, each containing two integers y and x.

// t
// y₁ x₁
// y₂ x₂
// ...
// y_t x_t

// Output

// For each test case, print a single integer — the number located at row y and column x in the number spiral.

// Constraints

// 1
// ≤
// 𝑡
// ≤
// 10
// 5
// 1≤t≤10
// 5

// 1
// ≤
// 𝑦
// ,
// 𝑥
// ≤
// 10
// 9
// 1≤y,x≤10
// 9

// Example

// Input

// 3
// 2 3
// 1 1
// 4 2


// Output

// 8
// 1
// 15

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--)
    {
        long long y, x;
        cin>> y >> x;
        if(y > x){
            if(y % 2){
                cout << (y-1)*(y-1) + x;
            }
            else{
                cout << y*y - x + 1;
            }
        }else{
            if(x % 2 == 0){
                cout << (x-1)*(x-1) + y;
            }else{
                cout << x*x - y + 1;
            }
        }

        cout<<endl;

    }
    
    return 0;
}