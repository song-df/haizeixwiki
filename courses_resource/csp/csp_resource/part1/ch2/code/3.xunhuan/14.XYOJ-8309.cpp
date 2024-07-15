/*************************************************************************
	> File Name: 14.XYOJ-8309.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 22:06:58 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, a = 1, b = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << a + b;
        b = a + b;
        a = b - a;
    }
    cout << endl;
    return 0;
}
