#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int M, N, Sum = 0;
    cin >> M >> N;
    
    int MinValue = -1; // 초기값을 -1로, 제곱수가 없을 경우 처리
    bool bFound = false; // 초기값을 찾을 경우 제외
    
    for (int i = M; i <= N; ++i)
    {
        int Sqrt_i = sqrt(i);
        
        if (Sqrt_i * Sqrt_i == i) // 제곱된 값이 해당 i 인 M값과 같은가?
        {   
            // 처음 false로 된 bFound 가 위 조건이 맞으면 당연히 들어오게 되서 첫번째의 제곱근 값을 셋팅
            if (!bFound) 
            {
                MinValue = i;
                bFound = true; // 최초 값이 들어왔으므로 변경해서 이후 들어오지 않게한다.
            }
            
            Sum += i; // 위 값이 만족한다면 해당 i 값을 더해준다.
        }
    }
    
    // found값이 true (이 곳은 그냥 안전장치)
    if (bFound)
    {
        cout << Sum << endl;
        cout << MinValue << endl;
    }
    else
    {
        // 만약 found 값이 false라면 제곱근을 찾은 것이 없기 때문에,
        cout << "-1" << endl;
    }
    
}