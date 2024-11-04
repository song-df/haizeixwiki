#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n & 1) {    // n 是奇数
        n <<= 2;    // n = n << 2
        n |= (1<<4)-1;
        n ^= (1<<8)-1;
    }
    else {          // n 是偶数
        n >>= 2;    // n = n >> 2
        n |= (1<<8)-1;
        n ^= (1<<4)-1;
    }
    cout << n << endl;
    return 0;
}
