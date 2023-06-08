#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(int i = 0; i < included.size(); i++)
    {
        if(included[i]) //어차피 false 는 취급 안하는 듯 
        {
            answer += a + (i * d);
        }
    }
    return answer;
}