def addEdge(G,u,v):
    if(u not in G): temp = []
    else: temp = G[u]
    temp.append(v)
    G[u] = temp
    return G
 
def BFS(G, s, t):

    graph = {}
    count = 0
    graph[s] = 0
    visited = [False] * (len(G))
    queue = []
    queue.append(s)
    visited[s-1] = True
    while queue:
        s = queue.pop(0)
        
        for i in G[s]:
            if visited[i-1] == False:
                queue.append(i)
                graph[i] = graph[s] + 1
                visited[i-1] = True
                
    for i in graph.values():
        if i == t: count += 1
    print(count)
 
# Driver code
G = {}
n, e = [int(x) for x in input().split()] 
for i in range(e):
    u, v = [int(x) for x in input().split()]
    G = addEdge(G, u, v)
    G = addEdge(G, v, u)

m = int(input())
for i in range(m):
    s, t = [int(x) for x in input().split()]
    BFS(G, s, t)
    
