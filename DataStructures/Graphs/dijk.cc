/*
You are given a weighted undirected graph. The vertices are enumerated from 1 to n. Your task is to find the shortest path between the vertex 1 and the vertex n.

Input
The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.

It is possible that the graph has loops and multiple edges between pair of vertices.

Output
Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.


*/


#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#define pi 3.1415926535897932384626433832795
#define int long long
constexpr int MOD = 1e9 + 7;
#define INF 1e18
#define all(x) begin(x), end(x)

#ifndef leomessi
#define debug(x) cerr << #x << " "; __print(x); cerr << '\n';
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

template <class T, class V> void _print(pair<T, V> p);
template <class T> void __print(vector<T> v);
template <class T> void __print(set<T> v);
template <class T, class V> void __print(map<T, V> v);
template <class T> void __print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
    cerr << "{"; __print(p.first); cerr << ","; __print(p.second); cerr << "}";
}
template <class T> void __print(vector<T> v) {
    cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";
}
template <class T> void __print(set<T> v) {
    cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";
}
template <class T> void __print(multiset<T> v) {
    cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";
}
template <class T, class V> void __print(map<T, V> v) {
    cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";
}

template<typename T>
void Zeit(T &&func) {
    auto start = chrono::high_resolution_clock::now();
    func();
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "\nExecution time: " << fixed << static_cast<double>(duration.count()) / 1000000.00 << " seconds" << '\n';
}

template <typename T>
// usage vector<int> primes = sieve<int>(100)
vector<T> sieve(T n) {
    vector<bool> arr(n + 1, true);
    vector<T> vect;
    arr[0] = arr[1] = false;
    for (T i = 2; i <= n; i++) {
        if (arr[i]) {
            vect.push_back(i);
            for (T j = i * i; j <= n; j += i) {
                arr[j] = false;
            }
        }
    }
    return vect;
}

template <typename T>
// usage int res = C<int>(10, 5)
T C(T n, T r) {
    T ans = 1;
    r = (r > n - r) ? n - r : r;
    for (T i = 1; i <= r; i++, n--) ans = ans * n / i;
    return ans;
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int N = 2e5 + 9;
vector<vector<pair<int, int>>> g(N);
int dis[N], par[N];
bitset<N> ok;

void leo() {
    int n, m;
    cin >> n >> m;

    auto dijk = [&](int s, int t) -> bool {
        fill(dis, dis + n + 1, INF);
        fill(par, par + n + 1, -1);
        ok.reset();

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dis[s] = 0;
        pq.push({0, s});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            if (ok[u]) continue;
            ok[u] = true;

            if (u == t) return true;

            for (auto &e : g[u]) {
                int v = e.first;
                int w = e.second;

                if (dis[u] + w < dis[v]) {
                    dis[v] = dis[u] + w;
                    par[v] = u;
                    pq.push({dis[v], v});
                }
            }
        }

        return dis[t] != INF;
    };

    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a].emplace_back(b, w);
        g[b].emplace_back(a, w);
    }

    if (dijk(1, n)) {
        vector<int> ans;
        for (int j = n; j != -1; j = par[j]) {
            ans.push_back(j);
        }
        reverse(all(ans));
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " \n"[j == ans.size() - 1];
        }
    } else {
        cout << -1 << '\n';
    }
}

int32_t main() {
#ifndef leomessi
    freopen("Error.txt", "w", stderr);
#endif

    leo();
    return 0;
}

