#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;
char s[maxn];
int cnt1, cnt2, cnt3;

int main() {
    cin >> s;
    for (int i = 0; s[i] != '#'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
            cnt1++;
        else if (s[i] >= '0' && s[i] <= '9')
            cnt2++;
        else
            cnt3++;
    }
    printf("zm=%d\n", cnt1);
    printf("sz=%d\n", cnt2);
    printf("qt=%d\n", cnt3);
    return 0;
}
