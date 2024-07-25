/**
*	https://codeup.kr/problem.php?id=1067
* [기초-조건/선택실행구조] 정수 1개 입력받아 분석하기(설명)
* 정수 1개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을 출력해보자.

하지만 배열로 해보았다.

*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	if (a % 2 == 0)
	{
		if (a < 0)
		{
			cout << "minus" << endl;
		}
		else
		{
			cout << "plus" << endl;
		}
		cout << "even" << endl;
	}
	else
	{
		if (a < 0)
		{
			cout << "minus" << endl;
		}
		else
		{
			cout << "plus" << endl;
		}
		cout << "odd" << endl;
	}
}