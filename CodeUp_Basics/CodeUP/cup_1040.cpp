/*
* https://codeup.kr/problem.php?id=1040
* 입력된 정수 부호를 바꿔 출력
* -2147483647 ~ +2147483647 long long
* 비트를 반전 시켜서 사용하는 ~변수 + 1  방식
* 음수 값 곱하기 *= -1
* 변수 부호 사용 -변수
* 위 3가지 방식으로 풀이가 가능하다.
*/

#include <iostream>
using namespace std;

int main()
{
	long long a;
	cin >> a;

	cout << -a << endl;
	return 0;
}
