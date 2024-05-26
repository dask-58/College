/*
    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⠠⠄⠀⠀⠈⠀⠀⠀⠀⠀⠀⠊⠨⠀⢄⠀⠀⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⠔⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿
    ⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠆⠂⠀⠀⠀⠀⠀⣠⣄⢰⡆⢷⡘⣷⡆⢦⠰⣄⢠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⣿⣿⣿
    ⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠂⠉⠀⠀⠀⠀⠀⣰⢃⣾⣿⣿⡌⢷⠸⣷⡘⣿⡌⢇⢻⡄⢿⣎⢲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿
    ⠀⠀⠀⠀⠀⠀⠀⠀⡠⠋⠀⠀⠀⠀⣠⡄⣼⢠⠃⣾⣿⣿⣿⣷⡘⡆⢻⣷⡌⢿⡌⠀⢿⡘⣿⡆⠿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿
    ⠀⠀⠀⠀⠀⠀⡠⠊⠀⠀⠀⠀⣠⢀⣿⢠⡇⡎⣼⣿⣿⣿⣿⣿⣷⡔⠘⣿⣿⣦⠻⡌⠈⢷⡘⣷⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿
    ⡇⠀⠀⠀⢀⠈⠁⠀⠀⠀⠀⣸⣿⢸⡏⠸⠐⢰⣿⣿⣿⣿⣿⣿⣿⣿⣦⣘⣿⣿⣷⣄⠀⠀⢳⡘⡆⠈⣿⠰⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹
    ⣇⠀⠀⡠⠂⠀⠀⠀⠀⢠⢁⣿⣿⢸⡇⡆⢀⠿⠿⠿⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣂⡀⠀⢳⠠⠀⣿⡀⡆⠀⠀⠀⠀⠀⠀⠀⠀⣼
    ⣿⠀⠀⠀⠀⠀⠀⠀⢀⠎⣼⡟⠠⢸⡇⠀⣰⣶⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⢋⣵⣿⣿⣷⣦⠀⠁⠀⣿⡇⠇⠀⠀⠀⠀⠀⠀⠀⣰⣿
    ⣿⠁⠀⠀⠀⠀⠀⠀⠌⣼⠟⢀⠀⠀⡇⡆⣿⡿⠋⠉⠉⠡⢿⣿⣿⣿⣿⣿⠃⣾⡿⠋⠉⠠⠍⠡⠵⡀⣿⡇⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿
    ⠃⠀⠀⠀⠀⠀⠀⢀⠚⡣⢠⢊⠀⡄⠀⠗⣠⠘⠁⢀⣀⣈⣹⣿⣿⣿⣿⣿⢸⣿⠎⣀⣤⣤⡀⢁⣶⡇⣿⡇⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿
    ⠀⠀⠀⠀⠀⠀⠀⡿⢡⡀⢡⢇⠀⣷⡀⡾⠁⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠿⣿⣿⣿⣿⣿⣿⣿⠀⣿⠁⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿
    ⠀⠀⠀⠀⠀⠀⠀⡇⢸⢨⠂⡸⠀⢹⣿⣷⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢃⣴⣿⣿⣿⣿⣿⣿⡇⢠⡏⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿
    ⠀⠀⠀⠀⠀⠀⠀⠁⠘⣆⠃⠱⡀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⠿⠿⠿⢿⣿⣿⣿⣿⠀⡼⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⠀⠀⠀⠀⠀⠀⠀⠀⠠⡹⣄⡃⠉⢄⠘⣿⣿⣿⣿⣿⣿⣆⠠⢤⣤⣴⠶⠶⠒⠛⢀⣿⣿⣿⣿⠇⣸⠃⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣧⡀⠀⠀⠀⠀⠀⠀⠀⠈⠢⢍⣑⠒⠄⠘⢿⣿⣿⣿⣿⣿⣷⣄⠠⢤⣤⣤⠀⣠⣿⣿⣿⡿⠋⢠⠃⢠⣄⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿
    ⣿⣿⣦⣀⡀⠀⠀⠀⠀⠀⠀⠐⠨⢅⡚⡀⢤⠙⠻⢿⣿⣿⣿⣿⣿⡶⠤⠤⢊⣿⣿⡿⠛⠁⢀⠂⠀⠲⣌⠳⣦⣈⠛⢿⣿⣿⣿⣿⣿⣿
    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣍⡈⠀⠀⠀⠈⠉⠛⠛⠿⠿⣿⣿⠿⠟⠋⠀⠀⡠⠁⡀⡄⣷⣌⢳⣌⠻⣿⣦⣄⡉⠫⠯⠉⠍
    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⣋⣥⠖⠂⠀⠀⢦⣀⠀⠠⠁⠀⠀⠀⠀⠀⠀⠀⣰⠄⢐⠳⡐⠘⠿⠢⠙⢷⠙⣿⣿⣿⣦⡙⢧⣴
    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣫⣴⡿⠋⣱⣿⠃⡇⠀⠈⣿⣧⣤⣤⡀⠀⠀⠀⣄⠆⡼⠋⣼⣿⣷⣤⣴⣿⣿⡗⠀⢇⠙⢿⣿⣿⣿⡆⢻
    ⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⣴⣿⢏⠄⣴⣿⡟⡘⠐⡀⣄⢸⣿⣿⣿⣿⣿⡶⠀⢃⡾⠱⢀⣿⣿⣿⣿⣿⣿⠏⣴⡄⡌⣆⠈⢿⣿⣿⣿⠈
    ⣿⣿⣿⣿⣿⣿⣿⣿⠃⣾⣿⢣⠎⣼⣿⡿⠀⠀⠐⠰⠿⢸⣿⣿⣿⡿⢋⣶⣿⣶⣤⣴⣿⡿⠛⠛⠋⠉⠁⠨⣽⣇⠰⢸⡄⠘⣿⣿⡿⠀
    ⣿⣿⣿⣿⣿⣿⣿⠃⣼⣿⠃⠎⣼⣿⠟⢀⡾⢠⣴⠿⠃⢸⣿⣿⣿⡀⠻⣿⣿⣿⡿⠟⠉⣠⣶⣶⣾⣷⣶⣄⡀⠙⠀⡘⡇⡇⣿⡿⣡⢱
    ⣿⣿⣿⣿⣿⣿⡏⢰⣿⣿⠀⢸⣿⠏⣴⣿⣷⡆⠁⠀⠀⣿⣿⣿⡿⢃⣼⣿⡿⠋⠄⣡⣾⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠌⢀⠀⡿⢡⡟⣿
    ⣿⣿⣿⣿⣿⡿⢁⢸⣿⣿⡆⢈⢻⠸⢛⣉⣩⠂⠀⠀⣴⣿⣿⣿⡦⢸⡿⡋⠈⠌⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠉⢸⡇⣿⢹⣿
    ⣿⣿⣿⣿⣿⢱⢃⡄⢻⣿⣿⠈⡆⠃⢾⣿⡏⠀⠀⣼⣿⣿⠟⣫⡴⢋⠀⡃⠈⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠄⣿⡅⣿⠸⣿
*/
 
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
using namespace chrono;
 
#define pi 3.1415926535897932384626433832795
#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
constexpr int MOD = 1e9 + 7;
#define INF 1e18
#define all(x) begin(x), end(x)
#define itn int
 
#ifndef leomessi
#define debug(x) cerr << #x<<" "; __print(x); cerr << '\n';
#else
#define debug(x);
#endif
 
void __print(int x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const std::string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void __print(vector <T> v);
template <class T> void __print(set <T> v);
template <class T, class V> void __print(map <T, V> v);
template <class T> void __print(multiset <T> v);
template <class T, class V> void __print(pair <T, V> p) {cerr << "{"; __print(p.ff); cerr << ","; __print(p.ss); cerr << "}";}
template <class T> void __print(vector <T> v) {cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";}
template <class T> void __print(set <T> v) {cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";}
template <class T> void __print(multiset <T> v) {cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void __print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
template<typename T>
void time(T&& func) {
    auto start = std::chrono::high_resolution_clock::now();
    func();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "\nExecution time: " << fixed << static_cast<double>(duration.count()) / 1000000.00 << " seconds" << std::endl;
}
 
vector<int> sieve(int n) {
    int *arr = new int[n + 1](); 
    vector<int> vect; 
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0) {
            vect.push_back(i); 
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        } 
    return vect;
}
 
int C(int n, int r) {
    int ans = 1LL;
    r = (r > n - r) ? n - r : r;
    for (int i = 1; i <= r; i++, n--) {
        ans = ans * n / i;
    }
    return ans;
}
 
 
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void pre() {
    
  return;
}
 
 
void leo() {
    int x1, y1, x2, y2, x3, y3;
    // cp = (p3 - p1) cross (p3 - p2)
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    complex<int> p1 = {x1, y1};
    complex<int> p2 = {x2, y2};
    complex<int> p3 = {x3, y3};
    complex<int> A = p3 - p1;
    complex<int> B = p3 - p2;
    int p = (conj(A) * B).imag();
    if (p > 0) {
        cout << "LEFT\n";
    } else if (p < 0) {
        cout << "RIGHT\n";
    } else {
        cout << "TOUCH\n";
    }
}
 
signed main() {
#ifndef leomessi
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    pre();
    int t; cin >> t; while (t--)
    leo();
 
    /* auto start1 = high_resolution_clock::now();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1); */
 
     auto myLambda = []() {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    };
 
    //time(myLambda);
 
    
  return 0;
}
