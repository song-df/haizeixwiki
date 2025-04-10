#include <bits/stdc++.h>
using namespace std;
struct Node {
    int x, y;
};
struct Cmp {    // �ȽϽṹ��
    bool operator () (Node &a, Node &b) {
        return a.x < b.x || a.x == b.x && a.y < b.y;
    }
};
priority_queue<Node, vector<Node>, Cmp> que;   // ����queʱʹ��Cmp��Ϊ�ȽϹ���
int main() {
    que.push({3, 5});
    que.push({2, 4});
    que.push({1, 3});
    que.push({4, 2});
    que.push({3, 3});
    while (!que.empty()) {
        Node u = que.top();
        que.pop();
        cout << "(" << u.x << " , " << u.y << ")" << endl;
    }
    return 0;
}
