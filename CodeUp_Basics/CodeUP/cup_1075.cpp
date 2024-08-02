/**
*	https://codeup.kr/problem.php?id=1075
* [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기2(설명)
* 정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		n = n - 1; //n--; 와 같다.
		cout << n << endl;
	}
}