/*************************************************************************
	> File Name: 5.XYOJ-7271.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 20:21:27 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double x;
    int year = 0;
    cin >> x;
    while (x < 50) {
        year += 1;
        x *= 1.1;
    }
    cout << year << endl;
    return 0;
}
