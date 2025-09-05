#include <bits/stdc++.h>
using namespace std;

int n, L, R, X, Y, cnt;

int main() {
    cin >> n >> L >> R;
    for (int i = 1; i <= n; i++) {
        cin >> X >> Y;
        if (X <= L && R <= Y)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
