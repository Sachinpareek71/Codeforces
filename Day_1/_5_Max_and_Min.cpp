/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int min_num, max_num;

    // Find the minimum number
    if (A <= B && A <= C) {
        min_num = A;
    } else if (B <= A && B <= C) {
        min_num = B;
    } else {
        min_num = C;
    }

    // Find the maximum number
    if (A >= B && A >= C) {
        max_num = A;
    } else if (B >= A && B >= C) {
        max_num = B;
    } else {
        max_num = C;
    }

    cout << min_num << " " << max_num << endl;

    return 0;
}
