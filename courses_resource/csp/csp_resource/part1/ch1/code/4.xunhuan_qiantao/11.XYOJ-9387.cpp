/*************************************************************************
	> File Name: 11.XYOJ-9387.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 21:42:01 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m, n, flag = 0;
    cin >> m >> n;
    for (int x = 1; x <= m / 2; x++) {
        int y = m - x;
        if (x * y == n) {
            cout << "yes" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) cout << "no" << endl;
    return 0;
}
