/** https://codeup.kr/problem.php?id=1015&rid=0 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float n;
	cin >> n;

	cout << fixed;
	cout.precision(2);
	cout << round(100 * n) / 100 << endl;
}