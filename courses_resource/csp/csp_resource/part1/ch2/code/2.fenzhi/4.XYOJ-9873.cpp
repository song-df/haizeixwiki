/*************************************************************************
	> File Name: 4.XYOJ-9873.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 11:08:05 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main_1() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        int temp = b;
        b = c;
        c = temp;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    if (a < c) {
        a ^= c;
        c ^= a;
        a ^= c;
    }
    if (b < c) {
        b ^= c;
        c ^= b;
        b ^= c;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
