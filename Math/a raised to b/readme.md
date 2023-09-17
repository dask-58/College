# Calculating *A^(B)* 

---

Here is the code. 

```cpp
#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int exp(long long a, long long b){
	if(b==0){
		return 1;
	}
	long long ans = exp(a, b/2) % mod;
	ans = (ans * ans) % mod;
	if(b%2==1){
		ans = (ans * a) % mod;
	}
	return ans;
}

int main(){
	int a, b;
	cin >> a >> b;
	long long ans = exp(a, b);
	cout << ans << '\n';
return 0;
}
```


---

**Time complexity :-** O(n log(b));
