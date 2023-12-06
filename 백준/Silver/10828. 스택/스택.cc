#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main()
{
	int N;
	cin >> N;

	stack<int> s;

	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;

		if (command == "push")
		{
			int X;
			cin >> X;
			s.push(X);
		}
		else if (command == "pop")
		{
			if (s.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (command == "size")
		{
			cout << s.size() << endl;
		}
		else if (command == "empty")
		{
			cout << s.empty() << endl;
		}
		else if (command == "top")
		{
			if (s.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << s.top() << endl;
			}
		}
	}

	return 0;
}