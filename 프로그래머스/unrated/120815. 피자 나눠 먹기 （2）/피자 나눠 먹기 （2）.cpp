#include <iostream>


using namespace std;
int gcd(int a, int b){
    if(a%b==0) return b;    
    return gcd(b, a%b);
}

int solution(int n) {
    int answer = 0;
    int m=gcd(n, 6);
    
    answer=n/m;
    
    return answer;
}