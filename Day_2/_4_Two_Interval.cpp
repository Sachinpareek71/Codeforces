/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input the intervals
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the maximum of the start points
    int start;
    if (l1 > l2) {
        start = l1;
    } else {
        start = l2;
    }

    // Calculate the minimum of the end points
    int end;
    if (r1 < r2) {
        end = r1;
    } else {
        end = r2;
    }

    // Check if there is an intersection
    if (start <= end) {
        // If there's an intersection, print its boundaries
        cout << start << " " << end <<endl;
    } else {
        // If there's no intersection, print -1
       cout << -1 <<endl;
    }

    return 0;
}
