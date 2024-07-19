/**
*	https://codeup.kr/problem.php?id=1057
* [기초-논리연산] 참/거짓이 서로 같을 때에만 참 출력하기
* 두 개의 참(1) 또는 거짓(0)이 입력될 때,
참/거짓이 서로 같을 때에만 참이 계산되는 프로그램을 작성해보자.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << ((a && b) || (!a && !b) ? "1" : "0") << endl;

	return 0;
}