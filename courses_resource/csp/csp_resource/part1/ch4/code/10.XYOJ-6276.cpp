#include <bits/stdc++.h>
using namespace std;

bool prime(int a) {
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}

int rev(int a) {
    int b = 0;
    while (a) {
        b = b * 10 + a % 10;
        a /= 10;
    }
    return b;
}

int m, n;
bool flag;

int main() {
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (prime(i) && prime(rev(i))) {
            if (!flag)
                flag = true;
            else
                cout << ",";
            cout << i;
        }
    }
    if (!flag)
        cout << "No";
    return 0;
}
