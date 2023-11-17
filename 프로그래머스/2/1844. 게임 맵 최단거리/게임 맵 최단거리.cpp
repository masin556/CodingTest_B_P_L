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
    int dr[] = { -1, 1, 0, 0 };
    int dc[] = { 0, 0, -1, 1 };

    // BFS를 위한 큐
    queue<pair<int, int>> q;
    q.push({ 0, 0 }); // 시작 지점은 (1, 1)
    visited[0][0] = true;

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        // 상대 팀의 캠프에 도달한 경우 최소 이동 횟수 반환
        if (row == n - 1 && col == m - 1) {
            return visited[row][col];
        }

        // 상하좌우 이동 확인
        for (int i = 0; i < 4; ++i) {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            // 이동 가능한 범위인지 확인
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m) {
                // 벽이 아니고 아직 방문하지 않은 지점인 경우 이동
                if (maps[newRow][newCol] == 1 && !visited[newRow][newCol]) {
                    q.push({ newRow, newCol });
                    visited[newRow][newCol] = visited[row][col] + 1;
                }
            }
        }
    }

    // 상대 팀의 캠프에 도달할 수 없는 경우
    return -1;
}