#include <bits/stdc++.h>
using namespace std;

int n;
string s[105];
set<string> st;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)
                st.insert(s[i] + s[j]);
    cout << st.size() << endl;
    return 0;
}
