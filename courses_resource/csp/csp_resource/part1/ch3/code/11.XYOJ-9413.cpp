#include <bits/stdc++.h>
using namespace std;
char s[300];
int cnt;

int main() {
    cin.getline(s, 300);
    for (int i = 0; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9') // isdigit(s[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
