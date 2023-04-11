#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    vector<long> S(N, 0);  // 입력 배열을 저장할 벡터
    vector<long> C(M, 0);  // 나머지 값이 같은 인덱스의 갯수를 저장할 벡터
    long answer = 0;  // 정답을 저장할 변수
    cin >> S[0];  // 첫번째 수는 따로 입력받기
    
    for(int i = 1; i < N; i++)
    {
        int temp = 0;
        cin >> temp;
        S[i] = S[i - 1] + temp;
    }
    
    for(int i = 0; i < N; i++) //합 배열의 모든 값 중에 % 연산 수행
    {
        int remainder = S[i] % M;
        //0 ~ i 까지의 구간 합 자체 0일 때 정답에 더하기 
        if(remainder == 0){
            answer++;
        }
        
        //나머지가 같은 인덱스의 갯수 세기
        C[remainder]++;
    }
    
    for(int i = 0; i < M; i++)
    {
        if(C[i] > 1){
            //나머지가 같은 인덱스 총 2개를 뽑는 경우의 수를 더하기
            answer = answer + (C[i] * (C[i] - 1) / 2);
        }
    }
    cout << answer << "\n";
}