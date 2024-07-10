/**
* https://codeup.kr/problem.php?id=1042
* 정수 2개(a, b)를 입력받아 a를 b로 나눈 몫을 출력해보자
* 단 -2147483648 <= a <= b <= +2147483647
*/

#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;

	cout << a / b << endl;
	return 0;
}