#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd, even;
    
    for(int num : num_list){
        if(num % 2 == 0){
            even += to_string(num);
        }
        else{
            odd += to_string(num);
        }
    }
    
    int total_sum = stoi(even) + stoi(odd);
    return total_sum;
}