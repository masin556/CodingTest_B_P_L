/*https://codeup.kr/problem.php?id=1019 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    char dot;
    cin >> a >> dot >> b >> dot >> c;
    cout << setw(4) << setfill('0') << a << '.' << setw(2) << setfill('0') << b << '.' << setw(2) << setfill('0') << c;
    return 0;
}