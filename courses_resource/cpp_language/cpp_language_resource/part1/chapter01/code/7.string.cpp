/*************************************************************************
	> File Name: 7.string.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  4/21 11:40:35 2024
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << endl;
    if (s1 < s2) cout << s1 << "<" << s2 << endl;
    if (s1 == s2) cout << s1 << "=" << s2 << endl;
    if (s1 > s2) cout << s1 << ">" << s2 << endl;
    cout << "s1.length() = " << s1.length() << endl;
    cout << "s2.size() = " << s2.size() << endl;
    
    for (int i = 0; i < s1.length(); i++) {
        cout << "s1[" << i << "] = " << s1[i] << endl;
    }
    for (int i = 0; s2[i]; i++) {
        cout << "s2[" << i << "] = " << s2[i] << endl;
    }

    cout << s1 + s2 << endl;
    cout << s1 + "hello world" << endl;

    cout << s1.substr(1, 2) << endl; // s1 = abcd, bc
    return 0;
}
