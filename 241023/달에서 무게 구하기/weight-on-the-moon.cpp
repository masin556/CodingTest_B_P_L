#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    
    int a = 13;
    double b = 0.165, c;
    c = a * b;
    cout.precision(6);
    cout << a << " * " << b << " = " << c;
    return 0;
}