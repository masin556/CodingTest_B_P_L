/**
* https://codeup.kr/problem.php?id=1077
* [기초-반복실행구조] 정수 1개 입력받아 그 수까지 출력하기(설명)
* 정수(0 ~ 100) 1개를 입력받아 0부터 그 수까지 순서대로 출력해보자.

for((반복전 실행/준비 내용); (조건 검사 내용); (한번 실행한 후 처리할 작업))
{ //코드블록
  ...
}
반복 구조를 사용하자
*/
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	for (int i = 0; i <= num; ++i)
	{
		std::cout << i << std::endl;
	}
	return 0;
}