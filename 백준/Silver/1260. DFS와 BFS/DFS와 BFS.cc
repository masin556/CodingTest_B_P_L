#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <vector>

using namespace std;

// 전역 변수 지정
vector<int> graph[10002];
vector<int> result_bfs;
vector<int> result_dfs;
bool visited[1002];

void bfs(int temp)
{
    queue<int> q;
    q.push(temp);
    visited[temp] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        result_bfs.push_back(x);

        for (int i = 0; i < graph[x].size(); i++) {
            if (!visited[graph[x][i]]) {
                q.push(graph[x][i]);
                visited[graph[x][i]] = true;
            }
        }
    }
}

void dfs(int x)
{
    visited[x] = true;
    result_dfs.push_back(x);
    for (int i = 0; i < graph[x].size(); i++) {
        if (!visited[graph[x][i]]) // 방문하지 않은 곳만 탐색
        {
            dfs(graph[x][i]);
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, v, a, b;

    cin >> n >> m >> v;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        graph[a].push_back(b); // 양방향 간선처리
        graph[b].push_back(a); // 양방향 간선
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end()); // 남은숫자부터 탐색
    }

    bfs(v);
    memset(visited, false, sizeof(visited));
    dfs(v);

    for (int i = 0; i < result_dfs.size(); i++) {
        cout << result_dfs[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < result_bfs.size(); i++) {
        cout << result_bfs[i] << " ";
    }
}