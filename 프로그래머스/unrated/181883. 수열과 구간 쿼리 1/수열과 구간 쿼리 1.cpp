#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(const auto& query : queries){
        int s = query[0];
        int e = query[1];
        for(int i = s; i <= e; i++){
            arr[i]++;
        }
    }
    return arr;
}