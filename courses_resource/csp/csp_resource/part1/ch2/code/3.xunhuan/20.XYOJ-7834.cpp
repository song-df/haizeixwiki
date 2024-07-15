/*************************************************************************
	> File Name: 20.XYOJ-7834.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 22:45:03 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double sn = 0;
    long long n = 0, k;
    cin >> k;
    while (sn < k) {
        n += 1;
        sn += 1.0 / n;
    }
    cout << n << endl;
    return 0;
}
