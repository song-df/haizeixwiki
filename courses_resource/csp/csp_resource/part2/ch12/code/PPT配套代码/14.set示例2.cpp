#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    for (int i = 1; i <= 100; i++)
        st.insert(5);
    for (int i = 1; i <= 10000; i++)
        st.insert(100);
    st.insert(2);
    st.insert(7);
    st.insert(12);
    st.insert(25);
    st.erase(12);
    for (auto x : st)
        cout << x << " ";
    cout << endl;
    int x;
    cin >> x;
//    if (st.find(x) != st.end())
    if (st.count(x))
        cout << "сп" << x << endl;
    else
        cout << "ц╩сп" << x << endl;
    return 0;
}
