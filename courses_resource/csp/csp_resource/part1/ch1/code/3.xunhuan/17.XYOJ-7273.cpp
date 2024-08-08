/*************************************************************************
	> File Name: 17.XYOJ-7273.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 22:22:27 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x != 1) {
        if (x % 2) {
            printf("%d*3+1=%d\n", x, x * 3 + 1);
            x = x * 3 + 1;
        } else {
            printf("%d/2=%d\n", x, x / 2);
            x = x / 2;
        }
    }
    cout << "End" << endl;
    return 0;
}
