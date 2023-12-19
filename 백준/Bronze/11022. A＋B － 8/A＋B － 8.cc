#include <iostream>
using namespace std;

int main()
{
	int n, a, b; //반복할 수
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ":" << " " << a << " + " << b << " = " << a + b << '\n';
	}


	return 0;
}