#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    for (int i = 1; i <= 8; i++) {
        if (i % 3 == 0)
            dq.push_front(i);
        else
            dq.push_back(i);
    }
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;
    dq.push_back(123);
    for (auto x : dq)
        cout << x << " ";
    cout << endl;
    return 0;
}
