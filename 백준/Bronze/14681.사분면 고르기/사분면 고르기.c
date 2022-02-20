#include <stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    
    if(x > 0){
        if(y > 0){
            printf("1");
        }else printf("4");
    }else {
        if(y > 0){
            printf("2");
        }else printf("3");
    }
    return 0;
}

//x 가 양수 일 경우 y가 양수 일경우 
//각각 좌표값을 보면 알수 있다. 이 문제는 예제 입력안을 잘 확인 한다면. 쉽게 풀 수 있는 문제