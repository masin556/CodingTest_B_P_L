#include <iostream>
using namespace std;

long long facto(long long n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * (facto(n - 1));
}

int main()
{
	int n;
	cin >> n;

	cout << facto(n) << endl;
	return 0;
}