#include <bits/stdc++.h>
using namespace std;

string f(string a, string b) {
    if (a.size() < b.size())
        return a;
    if (a.size() > b.size())
        return b;
    return a < b ? a : b;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;
    return 0;
}
