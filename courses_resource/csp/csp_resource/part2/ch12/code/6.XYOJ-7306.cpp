#include <bits/stdc++.h>
using namespace std;

int n, a, ans;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        pq.push(a);
    }
    for (int i = 1; i < n; i++) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    cout << ans << endl;
    return 0;
}
