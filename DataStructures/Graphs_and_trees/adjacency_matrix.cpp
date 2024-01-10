#include <iostream>
#include <vector>
#include <utility>

using namespace std;

const int N = 1e3 + 10;
int graph[N][N];

int main(){
    int v, e;
    cin >> v >> e;
    for(int i = 0; i < e; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    cout << "success\n";
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}