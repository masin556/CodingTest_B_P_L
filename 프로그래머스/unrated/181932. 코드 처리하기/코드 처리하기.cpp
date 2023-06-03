#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for(int idx = 0; idx < code.length(); idx++)
    {
        if(mode == 0){
            if(code[idx] != '1'){
                if(idx % 2 == 0){
                    answer += code[idx];
                }
            }
            else{
                mode = 1;
            }
        }
        else // mode가 1일때
        {
            if(code[idx] != '1'){
                if(idx % 2 == 1){
                    answer += code[idx];
                }
            }
            else{  // code[idx] == 1
                mode = 0; 
            }
        }
    }

    if(answer.empty()){
        return "EMPTY";
    }
    else{
        return answer;    
    }
    

}