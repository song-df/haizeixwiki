#include <bits/stdc++.h>
using namespace std;

struct Node {
    int x, y;

    int operator [] (int p) {
        return x * p + y;
    }
};

int main() {
    Node a = {3, 5};    // a.x = 3, a.y = 5
    for (int i = -1; i <= 5; i++)
        cout << i << " : " << a[i] << endl;
    return 0;
}
/**
-1 : 2
0 : 5
1 : 8
2 : 11
3 : 14
4 : 17
5 : 20
*/
