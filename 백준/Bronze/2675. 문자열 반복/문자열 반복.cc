#include <iostream>
using namespace std;

int main()
{
	int S, R; //반복할 수 
	string P; // 문자 입력

	cin >> S;
	for (int i = 0; i < S; i++)
	{
		cin >> R >> P;
		for (int j = 0; j < P.length(); j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << P[j];
			}
		}
		cout << endl;
	}
}