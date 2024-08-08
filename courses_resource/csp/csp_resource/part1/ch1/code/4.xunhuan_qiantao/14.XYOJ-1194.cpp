/*************************************************************************
	> File Name: 14.XYOJ-1194.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 22:18:40 2024
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = sqrt(n);
        int flag = 1;
        for (long long i = 2; i * i <= a; i++) {
            if (a % i) continue;
            flag = 0;
            break;
        }
        if (a * a == n && (a > 1 && flag == 1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
