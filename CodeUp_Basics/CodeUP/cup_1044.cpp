/**
* https://codeup.kr/problem.php?id=1044
* 정수를 1개 입력받아 1만큼 더해 출력해보자.
단, -2147483648 ~ +2147483647 의 범위로 입력된다.

주의
계산되고 난 후의 값의 범위(데이터형)에 주의한다
*/

#include <iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;

	cout << N + 1 << endl;
	return 0;
}