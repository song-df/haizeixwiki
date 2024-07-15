/*************************************************************************
	> File Name: 13.XYOJ-9855.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 21:59:54 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, p1 = 2;
    cin >> n;
    while (n % p1 != 0) p1 += 1;
    cout << n / p1 << endl;
    return 0;
}
