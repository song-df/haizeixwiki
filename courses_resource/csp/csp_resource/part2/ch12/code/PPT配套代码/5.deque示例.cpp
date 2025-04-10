#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}
