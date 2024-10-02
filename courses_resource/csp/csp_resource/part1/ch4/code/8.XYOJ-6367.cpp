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

int n;
bool flag;

int main() {
    cin >> n;
    for (int i = 3; i + 2 <= n; i += 2) {
        if (prime(i) && prime(i+2)) {
            cout << i << " " << i+2 << endl;
            flag = true;
        }
    }
    if (!flag)
        cout << "empty" << endl;
    return 0;
}
