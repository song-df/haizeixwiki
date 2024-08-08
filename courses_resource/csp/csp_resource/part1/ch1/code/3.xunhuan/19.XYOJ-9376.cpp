/*************************************************************************
	> File Name: 19.XYOJ-9376.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 22:37:59 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double h, sum = 0;
    cin >> h;
    for (int i = 1; i <= 10; i++) {
        sum += 1.5 * h;
        h /= 2;
    }
    cout << sum - h << endl;
    cout << h << endl;
    return 0;
}
