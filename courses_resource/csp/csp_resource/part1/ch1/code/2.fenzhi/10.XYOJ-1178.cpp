/*************************************************************************
	> File Name: 10.XYOJ-1178.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 12:48:57 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if (k == 0 || k == n) cout << 0 << " ";
    else cout << 1 << " ";
    if (3 * k <= n) {
        cout << 2 * k << endl;
    } else {
        cout << n - k << endl;
    }
    return 0;
}
