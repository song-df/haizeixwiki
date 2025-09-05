#include <bits/stdc++.h>
using namespace std;

int n, m, q, op, x, y;
set<pair<int, int>> st1;
set<int> st2;

int main() {
    scanf("%d%d%d", &n, &m, &q);
    while (q--) {
        scanf("%d%d", &op, &x);
        if (op != 2) scanf("%d", &y);
        if (op == 1)
            st1.insert({x, y});
        else if (op == 2)
            st2.insert(x);
        else {
            puts( st1.count({x, y}) || st2.count(x) ? "Yes" : "No" );
        }
    }
    return 0;
}
