#include <bits/stdc++.h>
using namespace std;
long long a[100];
int k;
string s;

int main() {
    cin >> a[1] >> a[2] >> k;
    s = to_string(a[1]) + to_string(a[2]);
    for (int i = 3; s.size() < k; i++) {
        a[i] = a[i-2] + a[i-1];
        s += to_string(a[i]);
    }
    cout << s[k-1] << endl;
    return 0;
}
