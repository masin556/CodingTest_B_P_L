/**
*	https://codeup.kr/problem.php?id=1076
* [기초-반복실행구조] 문자 1개 입력받아 알파벳 출력하기(설명)
* 영문자(a ~ z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력해보자.
*/

#include <iostream>
using namespace std;

int main()
{
	char word, wordt = 'a';
	cin >> word;
	do
	{
		cout << wordt << " ";
		wordt += 1; //t+=1; 는 t=t+1과 같은 의미이다.
	} while (wordt <= word); //의미 : t의 값이 'z'보다 작은 동안 반복된다.

}