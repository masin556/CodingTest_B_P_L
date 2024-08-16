/**
*	https://codeup.kr/problem.php?id=1087
*  [기초-종합] 여기까지! 이제 그만~(설명)
*	1, 2, 3 ... 을 순서대로 계속 더해나갈 때,
그 합이 입력한 정수보다 작을 동안만 계속 더하는 프로그램을 작성해보자.

즉, 1부터 n까지 정수를 계속 더한다고 할 때,
어디까지 더해야 입력한 수보다 같거나 커지는지 알아보고자 하는 문제이다.

하지만, 이번에는 그 때의 합을 출력해야 한다.

예를 들어 57을 입력하면
1+2+3+...+8+9+10=55에 다시 11을 더해 66이 될 때,
그 값 66이 출력되어야 한다.

*/
#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0, i = 1;
	cin >> n;

	while (1)
	{
		if (n > sum)
		{
			sum += i;
			++i;
		}
		else
		{
			cout << sum << endl;
			break;
		}
	}
	return 0;
}