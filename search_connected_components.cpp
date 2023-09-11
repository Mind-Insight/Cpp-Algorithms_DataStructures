#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define us unsigned int

void dfs(vector<vector<int>> &graph, int v, vector<int> &visited, int component)
{
    visited[v] = component;

    for (int to : graph[v])
        if (!visited[to])
            dfs(graph, to, visited, component);
}

int main()
{
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;

    vector<vector<int>> graph(vertexCount);
    for (int i = 0; i < edgeCount; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> visited(vertexCount);
    int componentCount = 0;

    for (int v = 0; v < vertexCount; v++)
        if (!visited[v])
        {
            componentCount += 1;
            dfs(graph, v, visited, componentCount);
        }

    for (int color : visited)
        cout << color << " ";
}