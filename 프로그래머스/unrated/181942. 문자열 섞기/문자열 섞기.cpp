#include <string>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    
    // str1과 str2의 길이 중 작은 값을 len에 저장
    int len = min(str1.length(), str2.length()); 

    for(int i = 0; i < len; i++){
        answer += str1[i];
        answer += str2[i];
    }
     
    return answer;
}
////
//str1의 length를 반복문에 돌려도 되긴 하지만. 만약 str1의 문자열의 길이와 str2의 길이가 다르다면 오류가 뜰것이다. 
//len에서 min값으로 작은 값을 저장 시켜 문자열을 반환하면 좀더 안정적으로 돌릴 수 있다. 
////