#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    if (n % 2) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = (1<<23); i >= 2; i /= 2) {
        if (n >= i) {
            cout << i << " ";
            n -= i;
        }
    }
    return 0;
}

