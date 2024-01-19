#include <iostream>
#define STR ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
	STR;
	int arr[101] = {};
	int n, m, a, b, c;

	cin >> n >> m;

	for(int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		for(int j = a; j <= b; j++)
		{
			arr[j] = c;
		}
	}

	for(int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}