/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
*/
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; // n is divisible by i, so it's not prime
    }
    return true; // n is a prime number
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; ++i) { // Start from 2 since 1 is not a prime number
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl; // To ensure output is properly formatted
    return 0;
}
