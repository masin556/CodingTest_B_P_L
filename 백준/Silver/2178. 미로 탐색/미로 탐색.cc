#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 101

using namespace std;

/*변수 선언*/
int n, m, cnt = 0;
int maze[MAX][MAX];
int visited[MAX][MAX];
int dist[MAX][MAX];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

queue<pair<int, int>> q;

void bfs (int x, int y)
{
    visited[x][y] = true;
    q.push ({x, y});
    dist[x][y]++; // 시작 좌표까지 이동한 칸을 1로 지정

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            // 현재 좌표와 상하좌우로 인접한 좌표
            int nx = a + dx[i];
            int ny = b + dy[i];

            if ((0 <= nx && nx < n) && 0 <= ny && ny < m)
            {
                if (!visited[nx][ny] && maze[nx][ny] == 1)
                {
                    visited[nx][ny] = 1;           // 인접 좌표는 방문한 것으로 저장
                    q.push ({nx, ny});             // 인접 좌표를 queue에 삽입
                    dist[nx][ny] = dist[a][b] + 1; // 인접 좌표까지 이동한 거리
                }
            }
        }
    }
}

int main()
{
    //미로 크기
    cin >> n >> m;

    //미로
    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row; //행

        for (int j = 0; j < m; j++) //행별 좌표값
        {
            maze[i][j] = row[j] - '0'; //좌표값이 문자 형태  숫자로 변환
        }
    }

    bfs (0, 0);

    cout << dist[n - 1][m - 1];

    return 0;
}