/**
*	https://codeup.kr/problem.php?id=1084
* [기초-종합] 빛 섞어 색 만들기(설명)
* 빨강(red), 초록(green), 파랑(blue) 빛을 섞어
여러 가지 빛의 색을 만들어 내려고 한다.

빨강(r), 초록(g), 파랑(b) 각각의 빛의 개수가 주어질 때,
(빛의 강약에 따라 0 ~ n-1 까지 n가지의 빛 색깔을 만들 수 있다.)

주어진 rgb 빛들을 다르게 섞어 만들 수 있는 모든 경우의 조합(r g b)과
총 가짓 수를 계산해보자.
*/

#include <iostream>
using namespace std;

int main() {
    int r, g, b, c = 0;
    cin.sync_with_stdio(false); // C++와 C의 I/O 동기화 비활성화
    cin.tie(nullptr); // cin과 cout의 동기화 비활성화

    cin >> r >> g >> b;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < g; j++) {
            for (int k = 0; k < b; k++) {
                cout << i << " " << j << " " << k << "\n";
                c++;
            }
        }
    }
    cout << c << '\n'; // 카운트 출력

    return 0;
}