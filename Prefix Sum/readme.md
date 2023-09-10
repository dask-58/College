# Prefix Sum

---

##### With Range Sum query example

---

Consider any array *a`<sub>`i`</sub>` = a`<sub>`1`</sub>` + a`<sub>`2`</sub>` + ... + a`<sub>`n`</sub>`*

Suppose you need to find sum of the array within bounds say, *a* and *b* for q different queries.

The code is 

---

```cpp
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> x(n);
	for(int i=0; i<n; i++){
		cin >> x[i];
	}
	vector<int> pref(n+1);
	for(int i=1; i<=n; i++){
		pref[i] = pref[i-1] + x[i-1];
	}
	int queries;
	cin >> queries;
	for(int i=0; i<queries; i++){
		int a, b;
		cin >> a >> b;
		cout << pref[b] - pref[a-1] << "\n";
	}
}

int main(){
	solve();
return 0;
}
```


---

The problem can be found  [HERE](https://cses.fi/problemset/task/1646)

---

> I'll keep updating this readme with more applications of prefix sum..
