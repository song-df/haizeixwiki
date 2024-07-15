/*************************************************************************
	> File Name: 1.XYOJ-8302.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 19:54:22 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int fi = i * i + 2;
        sum += fi;
    }
    cout << sum << endl;
    return 0;
}
