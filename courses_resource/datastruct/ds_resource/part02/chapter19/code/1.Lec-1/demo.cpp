#include <bits/stdc++.h>
using namespace std;

const int N = 50;

bitset<N> S;

int main() {
    for (int i = 0; i < N; i += rand() % 2 + 1) {
        S.set(i);
    }
    cout << "S = " << S << endl;
    for (int i = S._Find_first(); i < N; i = S._Find_next(i)) {
        cout << "index = " << i << endl;
    }
    return 0;
}