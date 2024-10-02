#include <bits/stdc++.h>
using namespace std;

int f(int a) {  // 返回 a 的不同质因数个数
    int cnt = 0;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            cnt++;
            while (a % i == 0)
                a /= i;
        }
    }
    if (a > 1)
        cnt++;
    return cnt;
}

int q, x;

int main() {
    cin >> q;
    while (q--) {
        cin >> x;
        cout << f(x) << endl;
    }
    return 0;
}

