#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7 + 5;

long long L, R, cnt = 1; // A[L]
bool f1[maxn], f2[maxn], f3[maxn];

void init() {
    for (int i = 2; i < maxn; i++) {
        if (!f3[i]) { // i是素数
            for (int j = i; j <= (maxn-1)/i; j++)
                f3[i*j] = true;
            // 将 [L, R] 范围内所有 i 的倍数标记为不是素数
            // f1[i - L] 表示 i 是不是素数
            for (long long j = max((L-1)/i+1, 2ll); j <= R/i; j++) {
                f1[i*j - L] = true;
            }
            // f2[i - L] 判断 i 是否是一个素数p的幂（>=2）
            long long j = i;
            while (j <= R / i) {
                j *= i;
                if (j >= L)
                    f2[j - L] = true;
            }
        }
    }
}

int main() {
    cin >> L >> R;
    init();
    for (long long i = L+1; i <= R; i++) {
        if (!f1[i - L] || f2[i - L])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
