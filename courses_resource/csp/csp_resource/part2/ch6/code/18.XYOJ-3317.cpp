#include <bits/stdc++.h>
using namespace std;
string wz[1005], s;
int p, m;

int main() {
//    freopen("XYOJ-3317.in", "r", stdin);
//    freopen("apple.out", "w", stdout);
    wz[p = m = 1] = "http://www.hzxjhs.com/";
    while (cin >> s && s != "QUIT") {
        if (s == "VISIT") {
            m = ++p;
            cin >> wz[p];
            cout << wz[p] << endl;
        }
        else if (s == "FORWARD") {
            if (p < m)
                cout << wz[++p] << endl;
            else
                cout << "Ignored" << endl;
        }
        else {
            if (p > 1)
                cout << wz[--p] << endl;
            else
                cout << "Ignored" << endl;
        }
    }
    return 0;
}
