// CSES — Repetitions
// Task

// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence — the maximum-length substring that contains only one repeated character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints

// 1
// ≤
// 𝑛
// ≤
// 10
// 6
// 1≤n≤10
// 6

// Time limit

// 1.00 s

// Memory limit

// 512 MB

// Example

// Input

// ATTCGGGA


// Output

// 3


#include <iostream>
using namespace std;

int repetions(string &s){
    if(s.length() == 0) return 0;
    if(s.length() == 1) return 1;

    int cnt = 1;
    int max_cnt = 0;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            cnt++;
        } else {
            max_cnt = max(max_cnt, cnt);
            cnt = 1;
        }
    }
    return max(max_cnt, cnt);
}

int main() {
    string s;
    cin >> s;
    cout << repetions(s);
    return 0;
}