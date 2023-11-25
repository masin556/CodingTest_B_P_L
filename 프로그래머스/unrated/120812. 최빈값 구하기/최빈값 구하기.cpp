#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    //short 타입) 배열크기 1001 초기값 0 이: 입력 배열의 각 숫자 빈도수 저장
    short arr[1001] = {0};
    
    /*
    현재 까지 최대 빈도수 최대 빈도수 가지는 숫자의 index를 저장 한다. 
    cnt : 최대 빈도수를 가지는 숫자의 갯수
    */
    int maxFreq = 0, index = 0, cnt = 0;
    for (int i = 0; i < array.size(); i++) 
    {
        //숫자 빈도 arr에 저장
        arr[array[i]]++;
         if (arr[array[i]] > maxFreq) 
        {
            maxFreq = arr[array[i]];
            cnt = 1;
            index = array[i];
        } 
        else if (arr[array[i]] == maxFreq) 
        {
            cnt++;
        }
    }
    
    return (cnt != 1) ? -1 : index;
}