#include <bits/stdc++.h>
using namespace std;

int n, op, x;
stack<int> stk;
map<int, int> mp;

int main() {
    cin >> n;
    while (n--) {
        cin >> op;
        if (op == 0) {
            cin >> x;
            stk.push(x);
            mp[x]++;
        }
        else if (op == 1) {
            if (!stk.empty()) {
                x = stk.top();
                stk.pop();
                if (--mp[x] == 0) {
                    // (x, 1) -> (x, 0)
                    mp.erase(x);
                }
            }
        }
        else {
//            cout << "ans = ";
            if (mp.begin() == mp.end()) { // mp.size()==0
                cout << 0 << endl;
            }
            else {
                auto it = mp.end();
                it--;
                cout << (it->first) <<endl;
            }
        }
    }
    return 0;
}

// stack
// map<int, int> mp[x]表示重量为x的物品次数
