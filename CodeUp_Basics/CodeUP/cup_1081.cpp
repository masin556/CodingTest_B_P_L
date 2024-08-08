/**
*	https://codeup.kr/problem.php?id=1081
*  [기초-종합] 주사위를 2개 던지면?(설명)
* 1부터 n까지, 1부터 m까지 숫자가 적힌
서로 다른 주사위 2개를 던졌을 때 나올 수 있는 모든 경우를 출력해보자.

참고
중첩의 원리...
반복 실행 구조도 조건 실행 구조와 마찬가지로 중첩의 원리가 적용된다.
반복 실행 구조를 중첩하면 원하는 반복 구조를 다양하게 만들어 낼 수 있다.

*/

#include <iostream>

using namespace std;

int main()
{
	int dice1, dice2;
	cin >> dice1 >> dice2;

	for (int i = 1; i <= dice1; ++i)
	{
		for (int j = 1; j <= dice2; ++j)
		{
			cout << i << " " << j << endl;
		}
	}
	return 0;
}