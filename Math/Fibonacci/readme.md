#MOST BASIC METHOD POSSIBLE TO FIND THE _n_<sup>th</sup> fibonacci number.

<code>//codeby proitdtdelre
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1) + fib(n-2);

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
cout << fib(t) << "\n";
return 0;
}</code>