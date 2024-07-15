/*************************************************************************
	> File Name: 10.XYOJ-1177.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 14:44:39 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    int x = (n + a - 1) / a; // 上取整
    int y = (m + a - 1) / a;
    cout << x * y << endl;
    return 0;
}
