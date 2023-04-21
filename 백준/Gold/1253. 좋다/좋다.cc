#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> A(N, 0);
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end()); // 입력 받은 숫자들을 오름차순으로 정렬한다.
    int Result = 0;
    
    for(int k = 0; k < N; k++){
        long find = A[k];
        int i = 0;
        int j = N - 1;
        
        //투 포인터 알고리즘
        while(i < j) { // 두 개의 포인터 i, j가 가리키는 숫자의 합을 조사하면서 목표값과 비교한다.
            if(A[i] + A[j] == find){ // 목표값을 찾은 경우
                if(i != k && j != k){ // 목표값을 찾은 두 수의 인덱스가 k가 아닌 경우 결과값(Result)을 증가시키고 다음 목표값을 찾기 위해 while문을 빠져나간다.
                    Result++;
                    break;
                }
                else if(i == k){ // A[i]가 k인 경우 i를 1 증가시켜 다음 숫자를 조사한다.
                    i++;
                }
                else if(j == k){ // A[j]가 k인 경우 j를 1 감소시켜 다음 숫자를 조사한다.
                    j--;
                }
            }
            else if(A[i] + A[j] < find) { // 합이 목표값보다 작은 경우 i를 1 증가시켜 합을 키운다
                i++;
            }
            else{ // 합이 목표값보다 큰 경우 j를 1 감소시켜 합을 줄인다.
                j--;
            }
        }
    }
    cout << Result << "\n";
}