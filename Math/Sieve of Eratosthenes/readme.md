# Sieve of Eratosthenes 

---

This algo returns al the prime numbers below a given input integer *n.*

An animation of the algo works..

![1694948347067](image/readme/1694948347067.png)

Iteratively checks for numbers and then there multiples. Left out numbers are the primes.

**Time Complexity :** O(nlog(log n))

The code is as follows :: 

```cpp
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n){
	if(n<=0 || n==1){
		cout << "No prime numbers exist below" << n;
	}
	vector<bool> prime(n+1, true);
	prime[0] = prime[1] = false;

	for(int i=2; i*i <=n; i++){
		if(prime[i){
			for(int j = i*i; j<=n; j+=p){
				prime[j] = false;
			}
		}
	}
	for(int i=2; i<=n; i++){
		if(prime[i]{
			cout << i << " ";
		}
	}
}

signed main(){
	int n;
	cin >> n;
	Sieveoferatosthenes(n);
return 0;
}
```
