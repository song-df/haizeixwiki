#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    int id, len;
    cin >> id >> len;
    int j;
    while ((cin >> j) && j) {
      --j;
      t[i] = max(t[i], t[j]);
    }
    t[i] += len;
    ans = max(ans, t[i]);
  }
  cout << ans << endl;
  return 0;
}