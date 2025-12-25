#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcdRecursive(int a, int b){

    if(b==0) 
        return a;

    return (b, a%b); 
}

int main() {
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is " << gcdRecursive(a, b) << '\n';
    // Lcm
    cout << "LCM of " << a << " and " << b << " is " << (a * b) / gcdRecursive(a, b) << '\n';

    // inbuilt method
    cout << "GCD of " << a << " and " << b << " is " << __gcd(a, b) << '\n';
    cout << "LCM of " << a << " and " << b << " is " << (a * b) / __gcd(a, b) << '\n';
    return 0;
}