#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    
    int Americano = 5500;
    int cups = money / Americano;
    
    answer.push_back(cups);
    answer.push_back(money % Americano);
    
    return answer;
}