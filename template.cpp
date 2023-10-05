#pragma GCC optimize("02")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define vi vector<int>

const int mod = 1e9+7;

int gcd(int a, int b){if(b==0){return a;} return gcd(b, a%b); }
ll fact(ll a){ll ans = 1; for(int i=1; i<=a; i++){ans*=i;} return ans;}
void sieve_all(int n){vector<bool> prime(n+1, true); prime[0] = prime[1] = false; for(int i=2; i*i<=n; i++){if(prime[i]){for(int j=i*i; j<=n; j+=i){prime[j] = false;}}}for(int i=2; i<=n; i++){if(prime[i]){cout << i << " ";}}cout << '\n';}
bool pal(string s){string t(s.rbegin(), s.rend());return s==t;}
bool isPrime(int num){if(num<=1){return false;}for(int i=2; i*i<=num; i++){if (num % i == 0) {return false;}}return true;}
void printprimes(int n){int cnt = 0;int num = 2;  while(cnt<n) {if(isPrime(num)) {cout << num << " ";cnt++;}num++;}}

void solve(){
	
}


int main(void){

ios_base::sync_with_stdio(false);
cin.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t;
	cin >> t;
	while(t--){
		solve();
	}

return 0;
}
