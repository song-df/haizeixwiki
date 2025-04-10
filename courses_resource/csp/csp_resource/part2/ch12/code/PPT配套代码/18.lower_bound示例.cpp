#include <bits/stdc++.h>
using namespace std;

int main() {   //a[0]                        a[9]
    int a[10] = { 1, 2, 2, 3, 4, 6, 8, 8, 9, 10 };
    int x = 8;
    int p = lower_bound(a, a+10, x) - a;        // >=x
    cout << *lower_bound(a, a+10, x) << endl;
    cout << p << " : " << a[p] << endl;

    p = upper_bound(a, a+10, x) - a;            // >x
    cout << p << " : " << a[p] << endl;

    vector<int> vec;
    srand(time(0));
    for (int i = 1; i <= 30; i += 2 + rand() % 5) {
        vec.push_back(i);
        if (rand() % 3 == 0)
            vec.push_back(i);
    }
    for (auto x : vec)
        cout << x << " ";
    cout << endl;
    x = 20;
    auto it = lower_bound(vec.begin(), vec.end(), x);
    cout << *it << endl;
    p = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
    cout << p << " " << vec[p] << endl;

    return 0;
}
