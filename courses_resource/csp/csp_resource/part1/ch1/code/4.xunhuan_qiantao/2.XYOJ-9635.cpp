/*************************************************************************
	> File Name: 2.XYOJ-9635.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 19:47:09 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, i, cnt;
    cin >> n;
    for (i = 2, cnt = 0; cnt < n; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i && flag; j++) {
            if (i % j == 0) flag = 0;
        }
        if (flag) cnt += 1;
    }
    cout << i - 1 << endl;
    return 0;
}
