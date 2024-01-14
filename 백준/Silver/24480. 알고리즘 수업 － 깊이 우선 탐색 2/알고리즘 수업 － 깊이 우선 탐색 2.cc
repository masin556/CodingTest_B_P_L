#include <algorithm>
#include <iostream>
#include <vector>
#define STR ios::sync_with_stdio(false), cin.tie(0)

using namespace std;
vector<vector<int>> graph;
vector<int> visited;
vector<int> seque;
int N, M, R, Seq;

void input()
{
    cin >> N >> M >> R;
    graph.resize(N + 1);
    visited.resize(N + 1);
    seque.resize(N + 1);

    int u, v;
    for (int i = 0; i < M; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }
}

void DFS(int n)
{
    seque[n] = ++Seq;
    visited[n] = 1;
    int graphsize = graph[n].size();
    for (int i = 0; i < graphsize; i++) {
        int v = graph[n][i];
        if (!visited[v])
            DFS(v);
    }
}

void fn_sol()
{
    DFS(R);
    for (int i = 1; i < N + 1; i++)
        cout << seque[i] << "\n";
}

int main()
{
    STR;
    input();
    fn_sol();

    return 0;
}