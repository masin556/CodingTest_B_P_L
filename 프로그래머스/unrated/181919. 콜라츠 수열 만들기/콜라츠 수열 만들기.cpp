#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n); //정수 첫부분을 담는다.
    
    while(n != 1)  // n이 1이면 반복되지 않는다.
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1; 
        }
        answer.push_back(n); // 반복된 다음 정수를 담는다.
    }
    
    return answer;
}