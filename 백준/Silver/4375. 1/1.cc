#include <iostream>
using namespace std;

int main() 
{
    int n; // 입력될 배수 
    
    while(cin >> n)
    {
        int remainder = 1; // 현재까지 생성한 수를 나타내는 변수 
        int digit_count = 1; //생성된 수의 자릿수를 나타내는 변수
        
        while(remainder % n != 0) {
            remainder = (remainder * 10 + 1) % n;
            digit_count++;
        }
        
        cout << digit_count << endl;
    }
    
    return 0;
}