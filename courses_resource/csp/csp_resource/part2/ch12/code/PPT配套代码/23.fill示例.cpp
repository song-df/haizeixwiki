#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100] = {};
    fill(a+1, a+6, 123);    // a[1..5] = 123
    fill(a+6, a+10, 6);     // a[6..9] = 6
    fill(a+10, a+15, 365);  // a[10..14] = 365
    for (int i = 0; i <= 20; i++)
        cout << i << " : " << a[i] << endl;
    return 0;
}
