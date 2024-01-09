#include <iostream>
#define STR ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
	STR;
	int result = 0,L, P, V, i = 0;
	while (1)
	{
		cin >> L >> P >> V;
		if ((L, P, V) != 0)
		{
			result = min(V % P, L) + (V / P) * L; // 5 8 20
			cout << "Case "<< ++i << ": " << result << "\n";
		}
		else
		{
			break;
		}
	}
	return 0;
}