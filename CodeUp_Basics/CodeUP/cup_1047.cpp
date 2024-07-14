/**
* https://codeup.kr/problem.php?id=1047
* 정수 1개를 입력받아 2배 곱해 출력해보자.
* 정수를 2배로 곱하거나 나누어 계산해 주는 비트단위시프트연산자 <<, >>를 이용한다.
*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;

	cout << (a << 1) << endl;

	return 0;
	//2. a *= 2;
	// cout << a << endl;

	//3. cout << a * 2 << endl;
}

/*C언어
int a=10;
printf("%d", a<<1); //10을 2배 한 값인 20 이 출력된다.
printf("%d", a>>1); //10을 반으로 나눈 값인 5 가 출력된다.
printf("%d", a<<2); //10을 4배 한 값인 40 이 출력된다.
printf("%d", a>>2); //10을 반으로 나눈 후 다시 반으로 나눈 값인 2 가 출력된다.
*/