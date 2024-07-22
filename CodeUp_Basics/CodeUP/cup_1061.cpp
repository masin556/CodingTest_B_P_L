/**
*	https://codeup.kr/problem.php?id=1061
* [기초-비트단위논리연산] 비트단위로 OR 하여 출력하기(설명)
* 입력된 정수 두 개를 비트단위로 or 연산한 후 그 결과를 정수로 출력해보자.
비트단위(bitwise) 연산자 |(or, vertical bar, 버티컬바)를 사용하면 된다.

 '|' 은 파이프(pipe)연산자라고도 불리는 경우가 있다.

** 비트단위(bitwise) 연산자는,
~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor),
<<(bitwise left shift), >>(bitwise right shift)
가 있다.

3     : 00000000 00000000 00000000 00000011
5     : 00000000 00000000 00000000 00000101
3 | 5 : 00000000 00000000 00000000 00000111
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << (a | b) << endl;
	return 0;
}