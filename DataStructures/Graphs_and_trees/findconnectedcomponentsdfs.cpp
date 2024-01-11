/* Given n & e (the total no of nodes and edges in an undirected graph, calculate the 
total number of connected components ... Multiple Vertcices connected by a path dont confuse with edges) */

/* One dfs call for any node will treaverse whole connected component .
so connected components  = no of times dfs runs */

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

const int N = 1e3 + 10;
vector<int> graph[N];
bool visited[N];

vector<vector<int>> connectedcomponents;
vector<int> currentcomponent;

void dfs(int root){
    visited[root] = true;
    currentcomponent.push_back(root);
    for(auto child : graph[root]){
        if(visited[child]){
            continue;
        }
        dfs(child);
    }
}

int main(){
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i]){
            continue;;
        }
        currentcomponent.clear();
        dfs(i);
        connectedcomponents.push_back(currentcomponent);
        ans++;
    }
    cout << ans << '\n';
    for(auto cc : connectedcomponents){
        for(auto vertex : cc){
            cout << vertex << " ";
        }
        cout << '\n';
    }
    return 0;
}