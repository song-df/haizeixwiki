/*************************************************************************
	> File Name: 10.XYOJ-8454.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 21:36:51 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int x, cnt = 0;
        cin >> x;
        for (int i = 2; x != 1; i++) {
            if (x % i) continue;
            cnt += 1;
            while (x % i == 0) x /= i;
        }
        cout << cnt << endl;
    }
    return 0;
}
