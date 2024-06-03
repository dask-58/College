#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 5;

int main() {
  int n;
  cin >> n;
  vector<int> dp(n, N);
  vector<int> h(n);
  dp[0] = 0;
  for (int i = 0; i < n; i++) 
    cin >> h[i];
  for (int i = 0; i < n; i++) {
    for (int j : {i + 1, i + 2}) {
      if (j < n) {
        dp[j] = min(dp[j], dp[i] + abs(h[j] - h[i]));
      }
    }
  }
  cout << dp[n - 1] << '\n';
  return 0;
}
