/*************************************************************************
	> File Name: 12.XYOJ-9383.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 21:55:31 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i <= 99; i++) {
        if (i != 10) cout << " ";
        int x = i, flag = 0;
        while (x != 0) {
            if (x % 10 == 7) flag = 1;
            x /= 10;
        }
        if (i % 7 == 0 || flag == 1) cout << "pass!";
        else cout << i;
    }
    cout << endl;
    return 0;
}
