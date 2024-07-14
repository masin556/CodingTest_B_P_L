/**
*	https://codeup.kr/problem.php?id=1046
* 정수 3개를 입력받아 합과 평균을 출력해보자.
단, -2147483648 ~ +2147483647
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a + b + c;

	cout << d << '\n';
	cout << fixed << setprecision(1);
	cout << (double)d / 3 << endl;

	return 0;
}
/*벡터에 담아서 관리한다거나. 처음 몇개를 입력할 지 물어보는게 더 좋을 수 있다.*/