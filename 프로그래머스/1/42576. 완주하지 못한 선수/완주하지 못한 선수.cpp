#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> hash_map;
    
    for(const auto& first : participant)
    {
        hash_map[first]++;
    }
    
    for(const auto& fin : completion)
    {
        hash_map[fin]--;
    }
    
    //출연빈도를 찾음?
    for(const auto& pair: hash_map)
    {
        if(pair.second == 1)
        {
            answer = pair.first;
            break;
        }
    }
    
    return answer;
}