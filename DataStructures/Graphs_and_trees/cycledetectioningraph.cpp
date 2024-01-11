#include <iostream>
#include <vector>
using namespace std;
const int N = 1e3 + 10;

vector<int> graph[N];
bool visited[N];

void dfs(int node, int parent){
    visited[node] = true;

    for(int neighbour : graph[node]){   
        if(!visited[neighbour]){
            dfs(neighbour, node);
        }else if(neighbour != parent){
            cout << "Cycle Exists\n";
            exit(0);
        }
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
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i, -1);
        }
    }
    cout << "Cycle doesn't exist\n";
    return 0;
}