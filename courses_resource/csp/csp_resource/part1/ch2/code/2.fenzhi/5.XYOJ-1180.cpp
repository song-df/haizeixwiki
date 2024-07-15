/*************************************************************************
	> File Name: 5.XYOJ-1180.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 11:16:38 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    a = n - a;
    b = b + 1;
    cout << min(a, b) << endl;
    return 0;
}
