#include <bits/stdc++.h>
using namespace std;

int n;
char s[25];

int main() {
	cin >> n >> s;
	puts(n >= 3 && strcmp(s+n-3, "tea") == 0 ? "Yes" : "No");
	return 0;
}
