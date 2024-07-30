/**
* https://codeup.kr/problem.php?id=1070
* [기초-조건/선택실행구조] 월 입력받아 계절 출력하기(설명)
* 월이 입력될 때 계절 이름이 출력되도록 해보자.

예
월 : 계절 이름
12, 1, 2 : winter
  3, 4, 5 : spring
  6, 7, 8 : summer
  9, 10, 11 : fall
*/

#include <iostream>
using namespace std;

int main()
{
	int inputs;
	cin >> inputs;

	switch (inputs)
	{
	case 12:
	case 1:
	case 2:
		cout << "winter" << '\n';
		break;
	case 3:
	case 4:
	case 5:
		cout << "spring" << '\n';
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer" << '\n';
		break;

	case 9:
	case 10:
	case 11:
		cout << "fall" << '\n';
		break;
	}

	return 0;
}