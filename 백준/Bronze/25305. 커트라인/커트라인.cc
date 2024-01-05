#include <iostream>
#include <algorithm>
#include <vector>
#define STR ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main()
{
	STR;
	int n, k;
	cin >> n >> k;

	vector<int> a(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	cout << a[n-k];

	return 0;
}