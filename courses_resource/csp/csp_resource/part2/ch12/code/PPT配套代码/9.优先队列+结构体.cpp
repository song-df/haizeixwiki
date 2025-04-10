#include <bits/stdc++.h>
using namespace std;
struct Node {
    int x, y;
    // ����С�ں������
    bool operator < (const Node& b) const {
        return x < b.x || x == b.x && y < b.y;
    }
};
priority_queue<Node> que;   // ʹ��NodeĬ�ϵıȽϹ���

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
