#include <bits/stdc++.h>
using namespace std;
char s[100010];
int cnt[128]; // cnt[x]��¼ASCII��Ϊx���ַ����ִ���

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
