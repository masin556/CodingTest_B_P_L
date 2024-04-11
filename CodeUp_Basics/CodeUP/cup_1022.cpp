/* https://codeup.kr/problem.php?id=1022&rid=0 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char data[2001];
	// getline(cin, data); ////string형 공백문자 받기
	cin.getline(data, 2001, '\n'); ////char형 문자로 입력종료
	//gets_s(data, sizeof(data));

	cout << data;
}