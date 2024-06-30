/**
* https://codeup.kr/problem.php?id=1036
* 영문자 1개를 입력 받고, 아스키 코드표의 10진수 값으로 출력
*
* string 형태는 stoi 함수를 써서 정수형으로 바꿀 수 있다.
* stoi = string to int
* stof = string to float
* stol = string to long
* stod = string to double
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char Eng;
	cin >> Eng;

	cout << dec << (int)Eng;
	return 0;
}