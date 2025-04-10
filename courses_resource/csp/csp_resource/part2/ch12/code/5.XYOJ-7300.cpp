#include <bits/stdc++.h>
using namespace std;

int n, op, x;
priority_queue<int> pq;

int main() {
    cin >> n;
    while (n--) {
        cin >> op;
        if (op == 1) {
            cin >> x;
            pq.push(x);
        }
        else if (pq.empty()) // pq.size() == 0
            cout << "Empty." << endl;
        else {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
    return 0;
}
