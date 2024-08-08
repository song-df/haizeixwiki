/*************************************************************************
	> File Name: 8.XYOJ-7624.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 21:22:28 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    int cnt0 = 0, cnt1 = 0;
    for (int i = l; i <= r; i++) {
        int x = i;
        while (x) {
            if (x & 1) cnt1 += 1;
            else cnt0 += 1;
            x >>= 1;
        }
    }
    cout << cnt1 << " " << cnt0 << endl;
    return 0;
}
