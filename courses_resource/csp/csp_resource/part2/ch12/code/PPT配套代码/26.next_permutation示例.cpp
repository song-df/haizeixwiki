#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5};
    do {
        for (int i = 0; i < 5; i++)
            cout << a[i] << " ";
        cout << endl;
        _sleep(100);
    } while (next_permutation(a, a+5));
    return 0;
}

