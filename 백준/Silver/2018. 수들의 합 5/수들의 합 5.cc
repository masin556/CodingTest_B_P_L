#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, count{1}, start_index{1}, end_index{1}, sum{1};
    // count : 연속된 수열의 갯수
    // start_index : 현재 수열의 첫 번째 인덱스
    // end_index : 현재 수열의 마지막 인덱스
    // sum : 현재 수열의 합. 처음 수열은 {1}이므로 sum도 1로 초기화
    cin >> N;
    
    while(end_index != N) {
        if(sum == N) { // 딥을 찾았을 때 
            count++;
            end_index++;
            sum = sum + end_index;
        }
        else if(sum > N){ // 현재의 합이 답보다 클 때 
            sum = sum - start_index;
            start_index++;
        }
        else{
            end_index++;
            sum = sum + end_index;
        }
    }
    cout << count <<"\n";
}