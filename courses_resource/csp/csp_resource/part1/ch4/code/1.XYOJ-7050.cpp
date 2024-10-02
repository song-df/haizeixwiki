#include <bits/stdc++.h>
using namespace std;

bool check(int a) { // a : 2a : 3a
    int t[10] = {};
    for (int i = 1; i <= 3; i++) {
        t[i*a%10]++;
        t[i*a/10%10]++;
        t[i*a/100]++;
    }
    for (int i = 1; i <= 9; i++)
        if (t[i] != 1)
            return false;
    return true;
}

int main() {
    for (int i = 100; i <= 333; i++)
        if (check(i))
            cout << i << " " << 2*i << " " << 3*i << endl;
    return 0;
}
