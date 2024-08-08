/*************************************************************************
	> File Name: 3.XYOJ-9634.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 19:59:39 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = m; i >= 1; i--) {
        for (int j = 0; j < m - i; j++) cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) cout << i;
        cout << endl;
    }
    for (int i = 2; i <= m; i++) {
        for (int j = 0; j < m - i; j++) cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) cout << i;
        cout << endl;
    }
    return 0;
}
