/**
* https://codeup.kr/problem.php?id=1078
* [기초-종합] 짝수 합 구하기(설명)
* 정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.
*/

#include <iostream>
using namespace std;

int main()
{
	int num, result = 0;
	cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		if (i % 2 == 0)
		{
			result += i;
		}
	}

	cout << result << endl;
	return 0;
}