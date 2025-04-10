#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    for (int i = 1; i <= 8; i++)
        vec.push_back(i);
    vec.push_back(15);
    cout << "size = " << vec.size() << endl;
    // 通过索引（下标）
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    // 迭代器
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;
    // auto 自动类型识别 C++11
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;
    vec.pop_back();
    // for every x in vec: do something to x
    for (auto x : vec) {
        cout << x << " "; // 遍历
    }
    cout << endl;
    return 0;
}

