def createGraph(connections, n):
    lst = list()
    graph = [lst] * (n + 1)

    for index, connection in enumerate(connections):
        routers = graph[connection] + [index + 2]
        graph[connection] = routers
    
    return graph

paths = [[]]

def dfs(graph, currentVertex, visited):
    visited.append(currentVertex)

    for vertex in graph[currentVertex]:
        if vertex not in visited:
            dfs(graph, vertex, visited.copy())
    paths.append(visited)

def printPath(path):
    for num in path:
        print(num, end=" ")

def main():
    # n = number of routers
    n = int(input())
    # index of the connected routers
    connections = list(map(int, input().split(" ")))
    # print(connections)
    g = createGraph(connections, n)
    visited = []
    dfs(g, 1, visited)

    for path in paths:
        if(len(path) > 0 and path[-1] == n):
            printPath(path)
            print()

if __name__ == "__main__":
    main()