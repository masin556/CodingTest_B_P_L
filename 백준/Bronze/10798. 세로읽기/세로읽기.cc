#include <iostream>
#include <vector>

using namespace std;

class VerticalReader
{
private:
	vector<string> words;

public:
	VerticalReader()
	{
		//생성자 입력
		words.resize(5);
		for (int i = 0; i < 5; i++)
		{
			cin >> words[i];
		}
	}

	string printVerticalOrder()
	{ 
		string result;

		//수직으로 읽기
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i < words[j].size())
				{
					 result.push_back(words[j][i]);
				}
			}
		}
		return result;
	}
};



int main()
{
	VerticalReader reader;
	cout << reader.printVerticalOrder() << endl;
 
	return 0;
}