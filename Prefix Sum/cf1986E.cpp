// Problem : https://codeforces.com/problemset/problem/1986/E
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {   
        int a;
        cin >> a;
        mp[a % k].push_back(a / k);
    }
    int od = 0;
    for (auto& [a, v] : mp) {
        int z = v.size();
        od += (z & 1);
    }
    if (od > (n & 1)) {
        cout << "-1\n";
        return;
    }
    int ans = 0;
    for (auto& [a, v] : mp) {
        sort(all(v));
        int z = v.size();
        if (z & 1) {
            int mx = INF;
            int l = 0, h = 0;
            for (int i = 1; i < z; i++) {
                h += v[i + 1] - v[i];
                i++;
            } 
            mx = h;
            for (int i = 2; i < z; i++) {
                h -= v[i] - v[i - 1];
                l += v[i - 1] - v[i - 2];
                mx = min(mx, h + l);
                i++;
            }
            ans += mx;
        } else {
            for (int i = 0; i < z / 2; i++) {
                ans += v[2 * i + 1] - v[2 * i];
            }
        }
    }
    cout << ans << '\n';
  }
  return 0;
}
