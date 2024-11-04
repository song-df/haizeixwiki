#include <bits/stdc++.h>
using namespace std;
double H, U, D, F;

int main() {
    while (cin >> H >> U >> D >> F && H > 0) {
        double tmp = 0, v = U;
        for (int i = 1; ; i++) {
            tmp += v;
            if (tmp > H) {
                printf("SUCCESS ON DAY %d\n", i);
                break;
            }
            tmp -= D;
            if (tmp < 0) {
                printf("FAILURE ON DAY %d\n", i);
                break;
            }
            v = max(0.0, v - U * F / 100);
        }
    }
    return 0;
}
