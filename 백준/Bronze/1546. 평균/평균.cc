#include <iostream>
using namespace std;

int main()
{
    int M = 0; //과목 수 
    int score[1000]; // 과목 점수를 담을 배열
    cin >> M;
    
    //과목 점수 담기
    for(int i = 0; i < M; i++){
        cin >> score[i];
    }
    
    long HighScore = 0; // 최고점 판단
    long sum = 0; // 총합 
    
    //최고점 판단 및 총합
    for (int i = 0; i < M; i++){
        if(score[i] > HighScore){
            HighScore = score[i]; // score 배열에 담긴 값을 HighScore에 업데이트 해준다. 
        }
        sum += score[i]; // if문을 빠져나오면 가지고 있는 socre[i]의 방에 있는 값을 sum에 더하며 저장
    }
    double result = sum * 100.0 / HighScore / M;
    
    cout << result << "\n";
    return 0;
}