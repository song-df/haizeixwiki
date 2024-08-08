/*************************************************************************
	> File Name: 9.XYOJ-1177.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 14:40:11 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    int x = n / a + !!(n % a);
    int y = m / a + !!(m % a);
    cout << x * y << endl;
    return 0;
}
