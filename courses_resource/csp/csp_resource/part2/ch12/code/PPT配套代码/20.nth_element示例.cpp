#include <bits/stdc++.h>
using namespace std;
// P1923
const int maxn = 5e6 + 5;
int n, k, a[maxn];

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", a+i);
    nth_element(a, a+k, a+n);
    printf("%d\n", a[k]);
    return 0;
}

