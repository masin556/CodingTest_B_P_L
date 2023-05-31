#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0; 
    string result1 = to_string(a) + to_string(b);
    string result2 = to_string(b) + to_string(a);
    
    if(result1 > result2){
        answer = stoi(result1);
    }
    else
    {
        answer = stoi(result2);
    }

    return answer;
}