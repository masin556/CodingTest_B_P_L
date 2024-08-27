/**
*	https://codeup.kr/problem.php?id=1096
*	[기초-2차원배열] 바둑판에 흰 돌 놓기(설명)
*	기숙사 생활을 하는 학교에서 어떤 금요일(전원 귀가일)에는 모두 집으로 귀가를 한다.

	오랜만에 집에 간 영일이는 아버지와 함께 두던 매우 큰 오목에 대해서 생각해 보다가
	바둑판에 돌을 올린 것을 프로그래밍 할 수 있을까?"하고 생각하였다.

	바둑판(19 * 19)에 n개의 흰 돌을 놓는다고 할 때,
	n개의 흰 돌이 놓인 위치를 출력하는 프로그램을 작성해보자.
5
1 1
2 2
3 3
4 4
5 5
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n, x, y;
    cin >> n;

    int a[20][20] = {};

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a[x][y] = 1; // 입력 받은 좌표의 배열 요소를 1로 설정한다. 즉 해당 좌표에 값을 1을 넣는 다는 것
    } 


    for (int i = 1; i < 20; i++) {
        for (int j = 1; j < 20; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
