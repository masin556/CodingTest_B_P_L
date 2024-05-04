#include <stdio.h>

int main()
{
	int y, m, d;
	scanf_s("%d.%d.%d", &y, &m, &d);

	printf("%02d-%02d-%04d", d, m, y); //각 숫자별로 몇번째 까지 출력될지
}