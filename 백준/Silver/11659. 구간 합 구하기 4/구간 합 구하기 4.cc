#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); // 시간을 초과하는 문제를 해결할때 
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    int S[100000] = {};
    
    for(int i = 1; i <= N; i++){
        int temp;
        cin >> temp;
        S[i] = S[i - 1] + temp;
    }
    
    for(int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        cout << S[end] - S[start - 1] << "\n";
    }  
}