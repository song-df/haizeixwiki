#include <bits/stdc++.h>
using namespace std;

int n;
char c[110];
long long l[110], sum;

int main() {
    // 1. ÊäÈë
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> c[i] >> l[i];
    // 2. ÅÐ¶Ï Too Long
    for (int i = 1; i <= n; i++) {
        sum += l[i];
        if (sum > 100) {
            cout << "Too Long" << endl;
            return 0;
        }
    }
    // 3. Êä³ö
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= l[i]; j++)
            cout << c[i];
    }
    cout << endl;
    return 0;
}
