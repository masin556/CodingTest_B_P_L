#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
       // 두 분수를 더한 결과 분자와 분모 계산
    int Numer = numer1 * denom2 + numer2 * denom1; // 분자
    int Denom = denom1 * denom2; //분모
    
    int a = Numer; // 10
    int b = Denom; // 8
    
    //최대 공약수 
    while(b != 0)
    {
        int temp = a % b; //2 => 0
        a = b; //2
        b = temp; //0
    }
    
    // 결과 분수를 기약 분수로 만들기
    int divisor = a; //2
    answer.push_back(Numer / divisor); // 10 / 2 => 5
    answer.push_back(Denom / divisor); // 8 / 2 => 4

    return answer;
}