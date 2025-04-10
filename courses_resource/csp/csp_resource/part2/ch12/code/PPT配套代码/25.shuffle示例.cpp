#include <bits/stdc++.h>
using namespace std;

mt19937 rng(time(0));

int main() {
    int a[100];
    for (int i = 1; i <= 10; i++)
        a[i] = i;
    for (int j = 0; j < 10; j++) {
        shuffle(a+1, a+11, rng); // shuffle Ï´ÅÆ
        for (int i = 1; i <= 10; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}

