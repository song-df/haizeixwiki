#include <bits/stdc++.h>
using namespace std;

long long c1, c2, c3, c4, c5, c6, d1, d2, ans;

int main() {
    while (cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6) {
        if (c1 + c2 + c3 + c4 + c5 + c6 == 0)
            break;
        d1 = d2 = ans = 0;
        // 6x6
        ans += c6;
        // 5x5
        ans += c5;
        d1 += c5 * 11;
        // 4x4
        ans += c4;
        d2 += c4 * 5;
        // 3x3
        ans += (c3 + 3) / 4;
        if (c3 % 4 == 1) {
            d2 += 5;
            d1 += 7;
        }
        if (c3 % 4 == 2) {
            d2 += 3;
            d1 += 6;
        }
        if (c3 % 4 == 3) {
            d2++;
            d1 += 5;
        }
        // 2x2
        if (d2 >= c2)
            d1 += (d2 - c2) * 4;
        else {
            c2 -= d2;
            ans += (c2 + 8) / 9;
            if (c2 % 9)
                d1 += 36 - c2 % 9 * 4;
        }
        // 1x1
        if (c1 > d1) {
            c1 -= d1;
            ans += (c1 + 35) / 36;
        }
        cout << ans << endl;
    }
    return 0;
}
