#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100] = { 1, 2, 4, 5, 7, 8, 11, 13 };
    // ·­×ª a[0..7]
    reverse(a, a+8);
    for (int i = 0; i < 8; i++)
        cout << a[i] << " ";
    cout << endl;
    // 13 11 8 7 5 4 2 1
    reverse(a+2, a+5);
    for (int i = 0; i < 8; i++)
        cout << a[i] << " ";
    cout << endl;
    // 13 11 5 7 8 4 2 1
    return 0;
}
