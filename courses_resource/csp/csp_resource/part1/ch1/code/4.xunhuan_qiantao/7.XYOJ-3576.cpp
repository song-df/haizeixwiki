/*************************************************************************
	> File Name: 7.XYOJ-3576.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 20:55:58 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 4 * (n - i) + 1; j++) cout << " ";
        for (int j = 1; j <= i; j++) {
            if (j != 1) cout << "       ";
            cout << "O";
        }
        cout << endl;
        for (int j = 1; j <= 4 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) {
            if (j != 1) cout << "     ";
            cout << "/|\\";
        }
        cout << endl;
        for (int j = 1; j <= 4 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) {
            if (j != 1) cout << "     ";
            cout << "/ \\";
        }
        cout << endl;
    }
    return 0;
}
