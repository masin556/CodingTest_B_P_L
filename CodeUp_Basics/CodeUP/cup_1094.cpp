/**
*	https://codeup.kr/problem.php?id=1094
*	[기초-1차원배열] 이상한 출석 번호 부르기2(설명)
*	정보 선생님은 수업을 시작하기 전에 이상한 출석을 부른다.

학생들의 얼굴과 이름을 빨리 익히기 위해 번호를 무작위(랜덤)으로 부르는데,
영일이는 선생님이 부른 번호들을 기억하고 있다가 거꾸로 불러보는 것을 해보고 싶어졌다.

출석 번호를 n번 무작위로 불렀을 때, 부른 번호를 거꾸로 출력해 보자.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	vector <int> arr;

	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		arr.push_back(m);
	}

	reverse(begin(arr), end(arr));
	
	/*for (int i = 0; i < n / 2; i++)
	{
		swap(arr[i], arr[n - i - 1]);
	}*/

	for (const auto &i : arr)
	{
		cout << i << " ";
	}

	return 0;
}
