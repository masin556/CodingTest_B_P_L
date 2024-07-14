/**
* https://codeup.kr/problem.php?id=1045
* 정수 2개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을 자동으로 계산해보자.
단 0 <= a, b <= 2147483647, b는 0이 아니다.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	unsigned int a, b;
	cin >> a >> b;

	cout << a + b << '\n'
		 << a - b << '\n'
		 << a * b << '\n'
		 << a / b << '\n'
		 << a % b << '\n';
	
	//cout.precision(2);
	cout << fixed << setprecision(2); // 소수점 2
	cout << static_cast<double>(a) / b << endl;

	return 0;
}
/*#include <stdio.h>

int main() {
    unsigned int a, b;

    // 두 정수를 입력
    scanf_s("%u %u", &a, &b); // %u 부호 없는 10진수 %d 사용해도 비슷

    // 연산 결과를 출력
    printf("%u %u %u %u %u %.2f\n", a + b, a - b, a * b, a / b, a % b, (double)a / b);

    return 0;
}*/