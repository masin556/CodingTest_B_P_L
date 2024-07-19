/**
*	https://codeup.kr/problem.php?id=1056
* [기초-논리연산] 참/거짓이 서로 다를 때에만 참 출력하기(설명)
* 두 가지의 참(1) 또는 거짓(0)이 입력될 때,
참/거짓이 서로 다를 때에만 참을 출력하는 프로그램을 작성해보자.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << ((a && !b) || (!a && b) ? "1" : "0") << endl;

	return 0;
}