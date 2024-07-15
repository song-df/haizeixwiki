/*************************************************************************
	> File Name: 2.XYOJ-3549.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 19:57:40 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        //if (i % 2 == 1) sum += i;
        if ((i & 1) == 1) sum += i;
        else sum -= i;
    }
    cout << sum << endl;
    return 0;
}
