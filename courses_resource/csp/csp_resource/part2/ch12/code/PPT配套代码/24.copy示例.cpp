#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100] = { 0, 1, 3, 5, 7, 9 }, b[100] = {};
    copy(a+1, a+6, b+1);
    copy(a+1, a+6, b+3);
    for (int i = 1; i <= 10; i++)
        cout << i << " : " << b[i] << endl;
    return 0;
}

