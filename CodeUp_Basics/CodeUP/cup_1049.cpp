/**
*	https://codeup.kr/problem.php?id=1049
* 두 정수(a, b)를 입력받아 a가 b보다 크면 1을, a가 b보다 작거나 같으면 0을 출력하는 프로그램을 작성해보자.
* 
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > b)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}

	return 0;
}