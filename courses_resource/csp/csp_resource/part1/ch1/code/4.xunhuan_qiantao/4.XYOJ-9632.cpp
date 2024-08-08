/*************************************************************************
	> File Name: 4.XYOJ-9632.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 20:09:03 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;
    n = 2 * m + 1;
    for (int i = 1; i <= m + 1; i++) {
        for (int j = 1; j <= 2 * m + 1; j++) {
            if (j == i || (n - j + 1) == i) cout << "x";
            else cout << "o";
        }
        cout << endl;
    }
    for (int i = m; i >= 1; i--) {
        for (int j = 1; j <= 2 * m + 1; j++) {
            if (j == i || (n - j + 1) == i) cout << "x";
            else cout << "o";
        }
        cout << endl;
    }
    return 0;
}
