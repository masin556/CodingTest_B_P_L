/**
*	https://codeup.kr/problem.php?id=1097
*	[기초-2차원배열] 바둑알 십자 뒤집기(설명)
*	부모님을 기다리던 영일이는 검정/흰 색 바둑알을 바둑판에 꽉 채워 깔아 놓고 놀다가...

"십(+)자 뒤집기를 해볼까?"하고 생각했다.

바둑판(19 * 19)에 흰 돌(1) 또는 검정 돌(0)이 모두 꽉 채워져 놓여있을 때,
n개의 좌표를 입력받아 십(+)자 뒤집기한 결과를 출력하는 프로그램을 작성해보자.

참고
가로 번호, 세로 번호를 사용할 수 있는 2차원 배열을 사용하면
이러한 형태를 쉽게 기록하고 사용할 수 있다. 물론 더 확장한 n차원 배열도 만들 수 있다.
*/

#include <iostream>
#include <vector>
using namespace std;

//입력받은 좌표 (x, y)를 중심으로 가로와 세로 방향으로 모든 원소를 1과 0으로 바꾼다.
void flip(vector<vector<int>>& board, int x, int y)
{
	int n = board.size();
	for (int i = 0; i < n; ++i) {
		board[x][i] = 1 - board[x][i]; // 1 - board[x][i] 연산을 통해 0과 1을 서로 바꾼다.
		board[i][y] = 1 - board[i][y];
	}
}

int main()
{
	int n, x, y;
	vector<vector<int>> board(20, vector<int>(20, 0));

	// 바둑판 초기화
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			cin >> board[i][j];
		}
	}

	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		flip(board, x, y);
	}

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}