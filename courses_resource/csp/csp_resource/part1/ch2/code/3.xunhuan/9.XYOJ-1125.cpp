/*************************************************************************
	> File Name: 9.XYOJ-1125.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 21:26:48 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    long long n, x = 1;
    cin >> n;
    for (int i = n - 1; i >= 1; i--) {
        x = (x + 1) * 2;
    }
    cout << x << endl;
    return 0;
}
