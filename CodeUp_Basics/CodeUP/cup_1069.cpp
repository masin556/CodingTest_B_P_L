/**
* https://codeup.kr/problem.php?id=1069
* [기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기(설명)
* 평가 : 내용
A : best!!!
B : good!!
C : run!
D : slowly~
나머지 문자들 : what?
*/

#include <iostream>

using namespace std;

int main()
{
	char inputs;

	cin >> inputs;

	switch (inputs)
	{
	case('A'):
		cout << "best!!!" << endl;
		break;
	case('B'):
		cout << "good!!" << endl;
		break;
	case('C'):
		cout << "run!" << endl;
		break;
	case('D'):
		cout << "slowly~" << endl;
		break;
	default:
		cout << "what?" << endl;
		break;
	}

	return 0;
}