/**
*	https://codeup.kr/problem.php?id=1068
* [기초-조건/선택실행구조] 정수 1개 입력받아 평가 출력하기(설명)
* 점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
평가 기준
점수 범위 : 평가
 90 ~ 100 : A
 70 ~   89 : B
 40 ~   69 : C
   0 ~   39 : D
로 평가되어야 한다.
*/

#include <iostream>

using namespace std;

int main()
{
	int Score = 0;
	cin >> Score;

	if (90 <= Score && Score <= 100)
	{
		cout << "A" << endl;
	}
	else if (70 <= Score && Score <= 89)
	{
		cout << 'B' << endl;
	}
	else if (40 <= Score && Score <= 69)
	{
		cout << 'C' << endl;
	}
	else
	{
		cout << 'D' << endl;
	}

	return 0;
}