/*************************************************************************
	> File Name: 10.XYOJ-7812.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 21:35:22 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x, n, sum = 0;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        if (x <= 5) sum += 250;
        x += 1;
        if (x == 8) x = 1;
    }
    cout << sum << endl;
    return 0;
}
