#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    // 각 숫자의 빈도수를 저장할 배열 선언
    short arr[1001] = {0};
    
    // 최빈값을 찾기 위한 변수들
    int maxFreq = 0, index = 0, cnt = 0;

    // 주어진 배열을 순회하면서 각 숫자의 빈도수를 계산
    for (int i = 0; i < array.size(); i++) 
    {
        arr[array[i]]++; // 현재 숫자의 빈도수 증가

        // 최빈값 갱신 여부 확인
        if (arr[array[i]] > maxFreq) 
        {
            maxFreq = arr[array[i]]; // 최빈값 갱신
            cnt = 1; // 최빈값의 개수 초기화
            index = array[i]; // 최빈값의 인덱스 저장
        } 
        else if (arr[array[i]] == maxFreq) 
        {
            cnt++; // 최빈값의 개수 증가
        }
    }

    // 최빈값이 여러 개라면 -1, 그렇지 않으면 최빈값 반환
    return (cnt != 1) ? -1 : index;
}