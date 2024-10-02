#include <bits/stdc++.h>
using namespace std;
int h, s;
char a[110];

int main() {
    cin >> h >> s >> a;
    for (int i = 0; a[i]; i++) {
        if (s > 0 && a[i] == 'u')
            s--;
        else if (s < h && a[i] == 'd')
            s++;
    }
    cout << s << endl;
    return 0;
}
