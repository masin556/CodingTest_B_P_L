/**
* https://codeup.kr/problem.php?id=1085
* [기초-종합] 소리 파일 저장용량 계산하기(설명)
* 실제로 일반적인 CD 음질(44.1KHz, 16bit, 스테레오)로 1초 동안 저장하려면
44100 * 16 * 2 * 1 bit의 저장공간이 필요하다.
*/

#include <iostream>

using namespace std;

int main()
{
	float Hz, bt, c, s, mb = 0;
	cin >> Hz >> bt >> c >> s;

	mb = (Hz * bt * c * s) / 8 / 1024 / 1024; // 소수점을 맞춰주기 위함
	printf("%.1f MB\n", mb);

	return 0;
}