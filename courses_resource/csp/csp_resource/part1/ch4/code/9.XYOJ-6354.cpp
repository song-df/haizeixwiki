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

int main() {
    int s;
    cin >> s;
    for (int i = s/2; ; i--) {
        if (prime(i) && prime(s-i)) {
            cout << i * (s - i) << endl;
            break;
        }
    }
    return 0;
}
