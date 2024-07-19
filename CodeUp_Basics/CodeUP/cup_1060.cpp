/**
*	https://codeup.kr/problem.php?id=1060
* [기초-비트단위논리연산] 비트단위로 AND 하여 출력하기(설명)
* 입력 된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.
비트단위(bitwise)연산자 ~ 를 붙이면 된다.(~ : tilde, 틸드라고 읽는다.)

3       : 00000000 00000000 00000000 00000011
5       : 00000000 00000000 00000000 00000101
3 & 5   : 00000000 00000000 00000000 00000001
같은 1 끼리 1로
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << (a & b) << endl;
	return 0;
}