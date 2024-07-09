/**
* https://codeup.kr/problem.php?id=1041
* 영문자 1개를 입력받아 그 다음 문자를 출력
* 'A' -> 'B' 영문자 '0' 다음 문자는 '1'이다.
*
*/

#include <iostream>

using namespace std;

int main()
{
	int A;
	char eng;
	cin >> eng;

	A = (int)eng + 1;

	cout << (char)A << endl;

	return 0;
}