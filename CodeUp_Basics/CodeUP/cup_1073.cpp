/**
*	https://codeup.kr/problem.php?id=1073
* [기초-반복실행구조] 0 입력될 때까지 무한 출력하기2(설명)
* 정수가 순서대로 입력된다.
-2147483648 ~ +2147483647, 단 개수는 알 수 없다.

0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단해보자.

수행되는 과정은
1. 먼저 조건을 검사한다.
2. 코드블록을 실행한다.
3. 다시 조건을 검사한다.
4. 코드블록을 실행한다.
*/

#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	while (num != 0)
	{
		cin >> num;
		if (num == 0)
		{
			break;
		}
		else
		{
			cout << num << '\n';
		}
	}

	return 0;
}