/**
*	https://codeup.kr/problem.php?id=1052
* [기초-비교연산] 두 정수 입력받아 비교하기4(설명)
* 두 정수(a, b)를 입력받아
a와 b가 서로 다르면 1을, 그렇지 않으면 0을 출력하는 프로그램을 작성해보자.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a != b)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

	return 0;
}