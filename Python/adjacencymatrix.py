v, e = map(int, input().split())

graph = [[0] * v for i in range(v)]

for i in range(e):
    v1, v2 = map(int, input().split())
    graph[v1][v2] = 1
    graph[v2][v1] = 1

for node in graph:
    print(' '.join(map(str, node)))