#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; // 수열 갯수
    cin >> N;
    vector<int> A(N, 0); // 수열 저장 배열
    vector<char> resultV; // 결과 저장 배열 
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    stack<int> Stack;
    int num = 1;  // 오름 차순 수
    bool result = true;
    
    for(int i = 0; i < A.size(); i++){
        int su = A[i]; //현재 수열의 값(수)
   
        //현재 수열 값 >= 오름차순 자연수 : 값이 같아질 때 까지 push()수행
        if(su >= num)
        {
            while(su >= num) 
            {
                Stack.push(num++);
                resultV.push_back('+'); // 결과 push되면 저장
            }
            Stack.pop();
            resultV.push_back('-');
        }

        //현재 수열 값 < 오름차순 자연수 : pop()을 수행하여 수열원소를 꺼냄
        else
        {
            int n = Stack.top();
            Stack.pop();

            if(n > su) 
            {
                cout << "NO";
                result = false;
                break;
            }
            else
            {
                resultV.push_back('-');
            }
        }
    }

        // -(마이너스)값을 출력한 적이 없다면
    if(result)
    {
        for(int i = 0; i < resultV.size(); i++){
            cout << resultV[i] << "\n";
        }
    }
}