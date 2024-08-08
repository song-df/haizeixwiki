/*************************************************************************
	> File Name: 15.XYOJ-1004.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 22:13:34 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while (n != 0 && m != 0) {
        if (n < m) m = m % n;
        else n = n % m;
    }
    cout << n + m << endl;
    return 0;
}
