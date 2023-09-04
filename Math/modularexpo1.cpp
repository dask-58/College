/*
Your task is to efficiently calculate values a^b
 modulo 1e9+7
.

Note that in this task we assume that 0^0=1
.

Input

The first input line contains an integer n
: the number of calculations.

After this, there are n
 lines, each containing two integers a
 and b
.

Output

Print each value a^b
 modulo 1e9+7
.

Constraints
1≤n≤2⋅1e5

0≤a,b≤1e9

Example

Input:
3
3 4
2 8
123 123

Output:
81
256
921450052
*/




//codeby proitdtdelre
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9+7;

ll solve(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll ans = solve(a, b/2) % mod;
    ans = (ans * ans) % mod;
    if(b%2==1){
        ans = (ans * a) % mod;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    while(n--){
        ll a, b;
        cin >> a >> b;

        ll ans = solve(a, b);

        cout << ans << "\n";
    }

    return 0;
}