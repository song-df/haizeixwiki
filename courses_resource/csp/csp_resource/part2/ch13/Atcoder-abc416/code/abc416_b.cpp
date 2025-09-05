#include <bits/stdc++.h>
using namespace std;

string s;
bool flag = true;

int main() {
    cin >> s;
    for (auto &c : s) {
        if (c == '#')
            flag = true;
        else if (flag && c != '#') {
            c = 'o';
            flag = false;
        }
    }
    cout << s << endl;
    return 0;
}
