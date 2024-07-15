/*************************************************************************
	> File Name: 4.XYOJ-1124.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 20:10:11 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) continue;
        int x = i, flag = 0;
        while (x != 0) {
            if (x % 10 == 5) flag = 1;
            x /= 10;
        }
        if (flag == 1) cout << i << endl;
    }
    return 0;
}
