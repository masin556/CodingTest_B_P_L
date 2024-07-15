/**
*	https://codeup.kr/problem.php?id=1050
*	두 정수(a, b)를 입력받아
	a와 b가 같으면 1을, 같지 않으면 0을 출력하는 프로그램을 작성해보자.


*/
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a == b)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

	return 0;
}