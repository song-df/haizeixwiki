#include <bits/stdc++.h>
using namespace std;

long long A, N, sum, tmp[66];

/**
a = 123, x = 0: 12321   a = 123(x==0) -> 12
a = 123, x = 1: 123321
*/
long long cal(long long a, long long x) {
    long long res = a;
    if (x == 0) a /= 10;
    while (a) {
        res = res * 10 + a % 10;
        a /= 10;
    }
    return res;
}

bool check(long long a) { // A进制
    int cnt = 0;
//    for (; a; tmp[++cnt] = a % A, a /= A );
    while (a > 0) {
        tmp[++cnt] = a % A;
        a /= A;
    }
    // a -- tmp[1..cnt] tmp[1]==tmp[cnt] tmp[2]==tmp[cnt-1]
    for (int i = 1; i <= cnt/2; i++)
        if (tmp[i] != tmp[cnt+1-i])
            return false;
    return true;
}

int main() {
    cin >> A >> N;
    for (long long i = 1; i < 1e6; i++) {
        for (int j = 0; j < 2; j++) {
            long long a = cal(i, j);
            if (a <= N && check(a)) {   // 判断 a 在 A 进制下是否是回文数
                sum += a;
            }
        }
    }
    cout << sum << endl;
    return 0;
}





