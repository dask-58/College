//codeby proitdtdelre
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i * i <=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

cout << (is_prime(t) ? "YES IT IS PRIME\n" : "NOT A PRIME\n");
return 0;
}