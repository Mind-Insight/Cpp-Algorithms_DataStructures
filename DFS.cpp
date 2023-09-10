#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define us unsigned int

void dfs(vector<vector<int>> &graph, int v, vector<int> &visited)
{
    visited[v] = 1;

    for (int to : graph[v])
        if (!visited[to])
            dfs(graph, to, visited);
}

int main()
{
    int vertexCount, edgeCount;
    cin >> vertexCount >> edgeCount;

    //! список смежностей
    vector<vector<int>> graph(vertexCount);
    for (int i = 0; i < edgeCount; i++)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    //! матрица смежностей
    vector<vector<int>> matrix_graph(vertexCount, vector<int>(vertexCount));
    for (int i = 0; i < edgeCount; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
}