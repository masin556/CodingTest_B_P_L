/**
	https://codeup.kr/problem.php?id=1033
	10진수 입력 -> 16진수로 출력 대문자
	대문자 출력은 uppercase 키워드를 사용하면 된다. 
*/

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	cout << uppercase << hex << N << endl;
	
	return 0;
}