/*************************************************************************
	> File Name: 1.XYOJ-1003.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 19:41:08 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    int flag = 0;
    cin >> n;
    while (n != 1) {
        if (n % i != 0) {
            i += 1;
            continue;
        }
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
