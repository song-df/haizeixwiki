#include <bits/stdc++.h>
using namespace std;

// x �Ķ����Ʊ�ʾ�����λ���Ǹ�1��Ӧ������
int lowbit(int x) {
    return x & -x;
}

int main() {
    int x;
    cin >> x;
    cout << lowbit(x) << endl;
    return 0;
}
