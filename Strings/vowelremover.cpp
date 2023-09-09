/* 
code by proitdtdelre */
#include <bits/stdc++.h>
#define ll                 long long
#define db                 double
#define pb                 push_back
#define MOD                1000000007
#define vi                 vector<int>
#define vl                 vector<long long>
#define all(x)             (x).begin(), (x).end()
#define umap               unordered_map
#define uset               unordered_set


using namespace std;

void solve(){
        string s;
        cin >> s;
        string vowels = "aeiou";
        string ans;
        for(char c : s){
            if(vowels.find(c) == string::npos){
                ans.pb(c);
            }
        }
        cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

}
