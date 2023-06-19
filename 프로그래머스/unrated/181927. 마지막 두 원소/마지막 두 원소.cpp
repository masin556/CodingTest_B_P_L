#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int LastE = answer.back();
    int PrevE = answer[answer.size() - 2];
    
    if(LastE > PrevE){
        answer.push_back(LastE - PrevE);
    }
    else{
        answer.push_back(LastE * 2);
    }
    
    return answer;
}