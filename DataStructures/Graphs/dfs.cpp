#include <bits/stdc++.h>

using namespace std; 

const int N = 6;
vector<vector<int>> adj(N);
vector<bool> visited(N)


void dfs(int node) { 
  if (visited[node]) return;
  visited[node] = true;

  for (auto neighbor : adj[node]) {
    dfs(neighbor);
  }
}

int main () {
  int n;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    --x;
    --y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      dfs(i);
    }
  }

  return 0;
}
