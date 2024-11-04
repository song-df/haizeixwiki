#include <bits/stdc++.h>
using namespace std;
char s[22];
int sum;

int main() {
    cin >> s;
    for (int i = 0, j = 1; j <= 9; i++) {
        if (s[i] == '-')
            continue;
        sum += (s[i] - '0') * j++;
    }
    sum %= 11; // [0..10]
    char c = (sum == 10) ? 'X' : '0' + sum;
    if (c == s[12])
        cout << "Right" << endl;
    else {
        s[12] = c;
        cout << s << endl;
    }
    return 0;
}
