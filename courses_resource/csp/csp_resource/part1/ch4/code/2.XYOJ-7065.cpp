#include <bits/stdc++.h>
using namespace std;

int f(int n) { // ·µ»Ø Fn
    if (n <= 0)
        return 0;
    return f(n-1) + 2;
}

int main() {
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
        cout << f(i) << endl;
    return 0;
}
