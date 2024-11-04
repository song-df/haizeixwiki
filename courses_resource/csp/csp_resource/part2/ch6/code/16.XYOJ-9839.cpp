#include <bits/stdc++.h>
using namespace std;

// x 的二进制表示中最低位的那个1对应的数字
int lowbit(int x) {
    return x & -x;
}

int main() {
    int x;
    cin >> x;
    cout << lowbit(x) << endl;
    return 0;
}
