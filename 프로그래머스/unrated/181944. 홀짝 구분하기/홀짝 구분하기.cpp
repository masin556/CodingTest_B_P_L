#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    //if문 사용 
    //if(n % 2 == 0)
    //{
    //    cout << n << " is even";
    //}
    //else 
    //{
    //    cout << n << " is odd";
    //}
    
    //삼항 연산자 사용
    cout << n << " is " << ( n % 2 == 0 ? "even" : "odd");
    
    return 0;
}