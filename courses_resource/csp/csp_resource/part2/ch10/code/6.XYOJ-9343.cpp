#include <bits/stdc++.h>
using namespace std;

int n;
double a[1010], sum;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    while (cin >> n) {
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1, a+n+1, cmp);
        // sort(a+1, a+n+1, greater<double>());
        sum = 0; // sum = a[2] + a[3] + .. + a[n]
        for (int i = 2; i <= n; i++)
            sum += a[i];
        if (a[1] <= sum)
            printf("%.1lf\n", (a[1] + sum)/2);
        else
            printf("%.1lf\n", sum);
    }
    return 0;
}

