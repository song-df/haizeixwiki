#include <bits/stdc++.h>
using namespace std;
char s[100010];
int cnt[128]; // cnt[x]记录ASCII码为x的字符出现次数

int main() {
    while (cin >> s) {
        for (int i = 0; s[i]; i++)
            cnt[s[i]]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
        if (cnt[i])
            cout << i << ":" << cnt[i] << endl;
    return 0;
}
