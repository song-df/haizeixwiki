#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n & 1) {    // n ������
        n <<= 2;    // n = n << 2
        n |= (1<<4)-1;
        n ^= (1<<8)-1;
    }
    else {          // n ��ż��
        n >>= 2;    // n = n >> 2
        n |= (1<<8)-1;
        n ^= (1<<4)-1;
    }
    cout << n << endl;
    return 0;
}
