#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    short arr[1001] = {0, };
    for (int i = 0; i < array.size(); i++) {
        arr[array[i]]++;
    }
    
    int maxFreq = 0, index = 0;
    int cnt = 0;
    
    for (int i = 0; i < 1001; i++) {
        if (arr[i] > maxFreq) {
            maxFreq = arr[i];
            cnt = 1;
            index = i;
        } else if (arr[i] == maxFreq) {
            cnt++;
        }
    }
    
    return (cnt != 1) ? -1 : index;
}