#include <iostream>
using namespace std;

int main()
{
	int n = 0, a = 1, b = 1;
	while (1)
	{
		cin >> a >> b;
		if (cin.eof()) {
			break;
		}
		else
		{
			cout << a + b << endl;
		}
	}
	return 0;
}