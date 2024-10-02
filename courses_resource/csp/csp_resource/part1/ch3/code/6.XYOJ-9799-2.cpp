#include <bits/stdc++.h>
using namespace std;
string s, s1, s2;

int main() {
    getline(cin, s);
    for (int i = 0; s[i]; i++)
        if (!isalpha(s[i]))
            s[i] = ' ';
    stringstream ss(s);
    while (ss >> s) {
        if (s1.size() == 0)
            s1 = s2 = s;
        else if (s.size() > s1.size())
            s1 = s;
        else if (s.size() < s2.size())
            s2 = s;
    }
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
