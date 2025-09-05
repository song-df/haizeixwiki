#include <bits/stdc++.h>
using namespace std;

const int N = 600;

vector<int> idx;

int topo_sort(vector<int> *adj, int n) {
  idx.clear();

  vector<int> deg_in(n, 0);
  queue<int> q;

  for (int i = 0; i < n; i++) {
    for (auto j : adj[i])
      deg_in[j]++;
  }

  for (int i = 0; i < n; i++) {
    if (deg_in[i] == 0)
      q.push(i);
  }

  bool unique_tag = true;
  while (!q.empty()) {
    int u = q.front(); q.pop();
    idx.push_back(u);
    if (!q.empty()) unique_tag = false;
    for (auto v : adj[u]) {
      if (--deg_in[v] == 0)
        q.push(v);
    }
  }

  if (idx.size() != n) {
    return -1;
  } else {
    return unique_tag;
  }
}

int check(int n, auto relations, int t) {
  vector<int> adj[N];
  for (int i = 0; i < t; i++) {
    adj[relations[i][0]].push_back(relations[i][1]);
  }
  return topo_sort(adj, n);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<array<int, 2>> relations(m);
  for (int i = 0; i < m; i++) {
    char opt[5];
    cin >> opt;
    relations[i][0] = opt[0] - 'A';
    relations[i][1] = opt[2] - 'A';
    int status = check(n, relations, i + 1);
    if (status == -1) {
      cout << "Inconsistency found after " << (i + 1) << " relations." << endl;
      return 0;
    } else if (status == 1) {
      cout << "Sorted sequence determined after " << (i + 1) << " relations: ";
      for (auto it : idx)
        cout << char(it + 'A');
      cout << "." << endl;
      return 0;
    }
  }
  cout << "Sorted sequence cannot be determined." << endl;
  return 0;
}