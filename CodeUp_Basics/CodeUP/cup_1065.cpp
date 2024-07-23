/**
*	https://codeup.kr/problem.php?id=1065
* [기초-조건/선택실행구조] 정수 3개 입력받아 짝수만 출력하기(설명)
* 세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자.

하지만 배열로 해보았다. 

*/

#include <iostream>
using namespace std;

int main()
{
	//int a, b, c;
	//cin >> a >> b >> c;

	//if (a % 2 == 0)
	//{
	//	cout << a << '\n';
	//}
	//else if (b % 2 == 0)
	//{
	//	cout << b << '\n';
	//}
	//else if (c % 2 == 0)
	//{
	//	cout << c << '\n';
	//}


	int arr[3] = {0,};
	for (int i = 0; i < size(arr); ++i)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << endl;
		}
	}

}