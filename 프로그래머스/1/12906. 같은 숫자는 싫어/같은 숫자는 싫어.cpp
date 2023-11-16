#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
  // 배열을 처음부터 끝까지 순회
    for (int i = 0; i < arr.size(); ++i) {
        // 결과 벡터가 비어있지 않고, 현재 숫자가 이전에 확인한 숫자와 같으면 continue
        if (!answer.empty() && answer.back() == arr[i]) {
            continue;
        }
        // 현재 숫자를 결과 벡터에 추가
        answer.push_back(arr[i]);
    }

    return answer;
}