#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;

int main() {
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++)
        if (islower(s[i]))
            cnt++;
    cout << cnt << endl;
    return 0;
}
