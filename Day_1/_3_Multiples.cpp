/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
*/

#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    // Check if a is a multiple of b or b is a multiple of a
    if (a % b == 0 || b % a == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }
 
    return 0;
}
