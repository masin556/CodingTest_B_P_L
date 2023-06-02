#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto query : queries){
        for(int j = query[0]; j <= query[1]; j++){
            arr[j]++;
        }
    }
    return arr;
}