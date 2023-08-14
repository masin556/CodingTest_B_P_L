#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    /*
     while문에서 stk가 비워져있지 않고, stk뒤 원소가 arr[i]보다 크게 되면 pop된다.*/
    for(int i = 0; i < arr.size(); i++)
    {
        while(!stk.empty() && stk.back() >= arr[i]){
            stk.pop_back();
        }
        stk.push_back(arr[i]); //위조건만 맞지 않는다면 다 이곳으로 들어온다. 
    }
    return stk;
}