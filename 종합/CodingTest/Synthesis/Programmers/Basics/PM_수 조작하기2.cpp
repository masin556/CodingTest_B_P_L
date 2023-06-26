#include <iostream>
#include <vector>

using namespace std;

string solution(vector<int>);

int main()
{
	int n;
	cin >> n;

	vector<int> numLog(n);
	for(int i = 0; i < n; i++)
	{
		cin >> numLog[i];
	}

	string result = solution(numLog);
	cout << result << endl;
}


string solution(vector<int> numLog)
{
	string answer = "";
	for(int i = 1; i < numLog.size(); i++)
	{
		int diff = numLog[i] - numLog[i - 1];
		if(diff == 1)
		{
			answer += 'w';
		}
		else if(diff == -1)
		{
			answer += 's';
		}
		else if(diff == 10)
		{
			answer += 'd';
		}
		else if(diff == -10)
		{
			answer += 'a';
		}
	}
	return answer;
}
