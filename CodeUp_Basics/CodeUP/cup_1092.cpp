/**
*	https://codeup.kr/problem.php?id=1092
*	[기초-종합] 함께 문제 푸는 날(설명)
* 온라인 채점 시스템 
*	방문 주기 
* 입력 3개 
* 입력된 3개는 방문주기 이고 카운팅으로 day를 입력해준다. 
*/

#include <iostream>
using namespace std;

//최대 공약수 
int gcd (int x, int y)
{
	while (y != 0)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}

// 최소공배수
int lcm(int x, int y)
{
	return (x / gcd(x, y)) * y;
}

int main() {
	//int day = 1;
	int a{ 0 }, b{ 0 }, c{ 0 };
	cin >> a >> b >> c;

	// 나눈 나머지의 값이 하나라도 1이 있다면 1 = true 가 된다
	// 이 방법이 최선인가?...? 최소공배수?
	//while ((day % a != 0) || (day % b != 0) || (day % c != 0))
	//{
	//	day++;
	//}

	int ab_lcm = lcm(a, b);
	int abc_lcm = lcm(ab_lcm, c);

	cout << abc_lcm << endl;
}