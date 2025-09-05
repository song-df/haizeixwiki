#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> que;
int q, op, x;

int main() {
	cin >> q;
	while (q--) {
        cin >> op;
        if (op == 1) {
            cin >> x;
            que.push(x);
        }
        else {
            cout << que.top() << endl;
            que.pop();
        }
	}
	return 0;
}
