/** [기초-비트시프트연산] 한 번에 2의 거듭제곱 배로 출력하기(설명)
* https://codeup.kr/problem.php?id=1048
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << (a << b) << endl;
	return 0;
}