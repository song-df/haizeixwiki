#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    mp["apple"] = 5;
    mp["moon"] = 12;
    mp["sun"] = 100;
    mp["banana"] = 2;
    mp["orange"] = 123;
    mp["byebye"] = 0;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "," << it->second << endl;
    }
    cout << "---\n";
    mp.erase("moon");
    for (auto pi : mp) {
        cout << pi.first << "," << pi.second << endl;
    }
    string s;
    cin >> s;
    if (mp.find(s) != mp.end())
        cout << "сп" << endl;
    else
        cout << "нч" << endl;
    return 0;
}
