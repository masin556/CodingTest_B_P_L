#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    //예각
    if (0 < angle && angle < 90)
    {
        answer = 1;
    }
    else if (angle == 90) // 직각
    {
        answer = 2;
    }
    else if (90 < angle && angle < 180) //둔각
    {
        answer = 3;
    }
    else // 평각 
    {
        answer = 4;
    }
    return answer;
    //삼항연산자를 이용해서 푸는 법도 있다. 
}