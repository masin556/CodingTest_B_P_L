/**
* https://codeup.kr/problem.php?id=1037
* 10진 정수 1개를 입력받아 아스키 문자로 출력
* 0~255범위
*/

#include <iostream>

using namespace std;

int main()
{
	unsigned int Deci;
	cin >> Deci;

	cout << (char)Deci << endl;
	return 0;
}