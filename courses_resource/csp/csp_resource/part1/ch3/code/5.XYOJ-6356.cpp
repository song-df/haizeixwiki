#include <bits/stdc++.h>
using namespace std;
char s[55];

int main() {
    cin >> s;
    int n = strlen(s);
    if (n > 2 && s[n-2]=='e' && s[n-1]=='r')
        s[n-2] = 0;
    else if (n > 2 && s[n-2]=='l' && s[n-1]=='y')
        s[n-2] = 0;
    else if (n > 3 && s[n-3]=='i' && s[n-2]=='n' && s[n-1]=='g')
        s[n-3] = 0;
    cout << s << endl;
    return 0;
}
