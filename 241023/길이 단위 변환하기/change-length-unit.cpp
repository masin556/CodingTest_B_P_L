#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double ft = 30.48, mi = 160934;
    double result = 0;

    cout<<fixed;
    cout.precision(1);
    result = ft*9.2; 
    cout << 9.2<<"ft" << " = " << result << "cm" << endl;
    result = mi*1.3;
    cout << 1.3 << "mi" << " = " << result <<"cm";

    return 0;
}