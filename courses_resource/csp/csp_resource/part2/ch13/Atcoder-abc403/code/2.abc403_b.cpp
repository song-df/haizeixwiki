#include <bits/stdc++.h>
using namespace std;

string T, U;
int n, m;

int main() {
    cin >> T >> U;
    n = T.size();
    m = U.size();
    for (int i = 0; i+m-1 < n; i++) {
        // T[i..i+m-1] -- U[0//m-1]
        bool flag = true;
        for (int j = 0; j < m; j++) { // T[i+j] -- U[j]
            if (T[i+j] != '?' && T[i+j] != U[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
