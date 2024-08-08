/*************************************************************************
	> File Name: 16.XYOJ-9388.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 23:03:26 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int m = 1; ; m++) {
        int sum = (1 + m) * m / 2;
        if (sum <= n) continue;
        if ((sum - n) % 3) continue;
        int x = (sum - n) / 3;
        if (x < 1 || x > m) continue;
        cout << x << " " << m << endl;
        break;
    }
    return 0;
}
