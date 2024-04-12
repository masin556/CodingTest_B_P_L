/* https://codeup.kr/problem.php?id=1024 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char d[31];
	cin >> d;

	for (int i = 0; d[i] != '\0'; i++)
	{
		printf("\'%c\'\n", d[i]);
	}

	return 0;
}