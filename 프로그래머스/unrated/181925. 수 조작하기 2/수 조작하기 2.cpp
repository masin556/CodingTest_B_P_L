#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    map<int, char> log{{1, 'w'}, {-1, 's'}, {10, 'd'}, {-10, 'a'}};
    
    for(int i = 1; i < numLog.size(); i++){
        int diff = numLog[i] - numLog[i - 1];
        
        if(log.count(diff)) {
            answer += log[diff];
        }
    }
    return answer;
}