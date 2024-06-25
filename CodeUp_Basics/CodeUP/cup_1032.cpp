/**
* https://codeup.kr/problem.php?id=1032
* 10진수를 입력 받아 16진수 hexadecimal 출력
*/

#include <iostream>

using namespace std;

int main()
{
	int Decimal;
	cin >> Decimal;

	cout << hex << Decimal << '\n';
	
	return 0;
}