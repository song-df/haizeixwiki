#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100] = { 1, 2, 2, 4, 4, 5, 5, 8, 9 };
//    int m = unique(a, a+9) - a;
//    for (int i = 0; i < m; i++)
//        cout << a[i] << " ";
//    cout << endl;

    vector<int> vec;
    for (int i = 0; i < 9; i++)
        vec.push_back(a[i]);
//    for (auto x : vec)
//        cout << x << " ";
//    cout << endl;
//    auto it = unique(vec.begin(), vec.end());
//    int m = it - vec.begin();
//    for (int i = 0; i < m; i++)
//        cout << vec[i] << " ";
//    cout << endl;
//    vec.erase(it, vec.end()); // [first, last)
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for (auto x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}
