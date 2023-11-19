#include<vector>
#include <queue>
using namespace std;

int solution(vector<vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();

    // 방문 여부를 저장하는 2차원 배열
    vector<vector<int>> visited(n, vector<int>(m, 0));

    // 상하좌우 이동 방향
    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };

    // BFS를 위한 큐
    queue<pair<int, int>> q;
    q.push({ 0, 0 }); // 시작 지점은 (1, 1)
    visited[0][0] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // 상대 팀의 캠프에 도달한 경우 최소 이동 횟수 반환
        if (x == n - 1 && y == m - 1) {
            return visited[x][y];
        }

        // 상하좌우 이동 확인
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 이동 가능한 범위인지 확인
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                // 벽이 아니고 아직 방문하지 않은 지점인 경우 이동
                if (maps[nx][ny] == 1 && !visited[nx][ny]) {
                    q.push({ nx, ny });
                    visited[nx][ny] = visited[x][y] + 1;
                }
            }
        }
    }

    // 상대 팀의 캠프에 도달할 수 없는 경우
    return -1;
}