/**
*	https://codeup.kr/problem.php?id=1062
* [기초-비트단위논리연산] 비트단위로 XOR 하여 출력하기(설명)
* 입력된 정수 두 개를 비트단위로 xor 연산한 후 그 결과를 정수로 출력해보자.
비트단위(bitwise) 연산자 ^(xor, circumflex/caret, 서컴플렉스/카릿)를 사용하면 된다.

** 주의 ^은 수학식에서 거듭제곱(power)을 나타내는 기호와 모양은 같지만,
C언어에서는 전혀 다른 배타적 논리합(xor, 서로 다를 때 1)의 의미를 가진다.

** 비트단위(bitwise) 연산자는,
~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor),
<<(bitwise left shift), >>(bitwise right shift)
가 있다.

3       : 00000000 00000000 00000000 00000011
5       : 00000000 00000000 00000000 00000101
3 ^ 5   : 00000000 00000000 00000000 00000110
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << (a ^ b) << endl;
	return 0;
}