/** https://codeup.kr/problem.php?id=1023 */
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int a, b;
	scanf_s("%d.%d", &a, &b); // 소수점 입력시 해당 점 표시를 통해 구분 된다. 만약 없으면. 다른 쓰레기값이 들어가진다.
	cout << a << '\n' << b;
}