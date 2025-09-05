#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    set<char> st;
    for (auto c : t)
        st.insert(c);
    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i]) && !st.count(s[i-1])) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
