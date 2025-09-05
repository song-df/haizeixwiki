#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7 + 5;

long long L, R, cnt = 1; // A[L]
bool f1[maxn], f2[maxn], f3[maxn];

void init() {
    for (int i = 2; i < maxn; i++) {
        if (!f3[i]) { // i������
            for (int j = i; j <= (maxn-1)/i; j++)
                f3[i*j] = true;
            // �� [L, R] ��Χ������ i �ı������Ϊ��������
            // f1[i - L] ��ʾ i �ǲ�������
            for (long long j = max((L-1)/i+1, 2ll); j <= R/i; j++) {
                f1[i*j - L] = true;
            }
            // f2[i - L] �ж� i �Ƿ���һ������p���ݣ�>=2��
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
