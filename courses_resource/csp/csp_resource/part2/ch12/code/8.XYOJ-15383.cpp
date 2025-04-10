#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
string s;
vector<string> animal[110];

// 返回第i个动物和第j个动物有多少个相同特征
int cal(int i, int j) {
    set<string> st;
    for (auto s : animal[i])
        st.insert(s);
    int cnt = 0;
    for (auto s : animal[j])
        if (st.count(s))
            cnt++;
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s >> k;
        for (int j = 0; j < k; j++) {
            cin >> s;
            animal[i].push_back(s);
        }
    }
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            ans = max(ans, cal(i, j) + 1);
    cout << ans << endl;
    return 0;
}
