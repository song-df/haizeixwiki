#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100] = { 5, 3, 2, 6, 7, 8, 3, 9, 10, 7 };
    int p = find(a, a+10, 7) - a; // a+p - a = p
    cout << p << " " << a[p] << endl;

    vector<int> vec;
    srand(time(0));
    for (int i = 0; i < 10; i++)
        vec.push_back(rand() % 100 + 1);
    for (auto x : vec)
        cout << x << " ";
    cout << endl;
    int x;
    while (cin >> x) {
        auto it = find(vec.begin(), vec.end(), x);
        if (it == vec.end())
            cout << "ц╩сп" << x << endl;
        else
            cout << "сп" << x << " : " << (it - vec.begin()) << endl;
    }
    return 0;
}
