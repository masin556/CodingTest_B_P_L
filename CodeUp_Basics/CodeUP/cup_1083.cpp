/**
*	https://codeup.kr/problem.php?id=1083
* [기초-종합] 3 6 9 게임의 왕이 되자!(설명)
* 3 6 9 게임을 하던 영일이는 3 6 9 게임에서 잦은 실수로 계속해서 벌칙을 받게 되었다.
3 6 9 게임의 왕이 되기 위한 마스터 프로그램을 작성해 보자.

참고
중첩의 원리
반복 실행 구조 안에 선택 실행 구조를 자유롭게 중첩할 수 있다.
*/

#include <iostream>

using namespace std;

int main()
{
	int GNum;
	cin >> GNum;

	for (int i = 1; i <= GNum; ++i)
	{
		if (i % 3 == 0)
		{
			cout << 'X' << " ";
		}
		else
		{
			cout << i << " ";
		}
	}

	return 0;
}