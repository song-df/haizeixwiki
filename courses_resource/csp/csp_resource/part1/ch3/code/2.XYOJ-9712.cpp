#include <bits/stdc++.h>
using namespace std;
char s[266];
int cnt;

int main() {
    cin.getline(s, 266);
    for (int i = 0; s[i]; i++)
        if (islower(s[i]))
                cnt++;
    cout << cnt << endl;
    return 0;
}

