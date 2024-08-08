/*************************************************************************
	> File Name: 5.XYOJ-1122.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 20:21:34 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        num *= i;
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
