#include <iostream>
#include <vector>
#include <algorithm>
#define STR ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

bool fn_cmp(int i, int j) { return j < i; }

int main()
{
    STR;
    int n;
    cin >> n;
    vector<int> a(n, 0);
    
    	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end(), fn_cmp);
	
	for (auto& i : a)
	{
		cout << i << '\n';
	}

    return 0;
}
