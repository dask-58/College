#include <bits/stdc++.h>
using namespace std;

const int N = (int)(1e6);
const int M = (int)(1e9);
vector<int> coins = {1, 3, 6, 10, 15};
vector<int> dp(N, M);

int main() {
	dp[0] = 0;
	for (int i = 0; i < N; i++) {
		for (auto x : coins) {
			if (i + x < N) {
				dp[i + x] = min(dp[i + x], dp[i] + 1);
			}
		}
	}
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		if (n >= N) {
			int cnt =(n - N) / c.back() + c.size();
			n -= cnt * c.back();
			ans += cnt;
		}
		cout << ans + dp[n] << '\n';
	}
	return 0;
}