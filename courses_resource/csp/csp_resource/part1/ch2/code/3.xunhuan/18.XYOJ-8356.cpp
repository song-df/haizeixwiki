/*************************************************************************
	> File Name: 18.XYOJ-8356.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 22:33:19 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, ans;
    cin >> a >> b;
    ans = a * b;
    while (a != 0 && b != 0) {
        if (a < b) b = b % a;
        else a = a % b;
    }
    cout << ans / (a + b) << endl;
    return 0;
}
