#include <iostream>
#include <utility>
#include <vector>

const int N = 1e3 + 10;
using namespace std;

vector<int> graph[N];
bool visited[N];

void dfs(int root){
    // Code to be written before entering any vertex / node / root
    // Usually for marking the node as visited
    visited[root] = true;
    for(auto child : graph[root]){
        // Code to be written to take action on the child node before entering it
        if(visited[child]){
            continue;
        }
        //recursive call
        dfs(child);
        
        // Code to be written to take action on child node after exiting child node.
    }
}

int main(){

    return 0;
}