/*************************************************************************
	> File Name: 9.XYOJ-1183.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 21:26:41 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << "=";
    for (int i = 2, flag = 0; n != 1; i++) {
        if (n % i != 0) continue;
        int cnt = 0;
        while (n % i == 0) cnt += 1, n /= i;
        if (flag) cout << "*";
        cout << i;
        if (cnt > 1) cout << "^" << cnt;
        flag += 1;
    }
    cout << endl;
    return 0;
}
