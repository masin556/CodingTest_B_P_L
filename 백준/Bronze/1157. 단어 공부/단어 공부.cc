#include <iostream>
#include <unordered_map>
#include <cctype>

int main()
{
	char nf = '?';
	int cnt = 0;
	std::string word;
	std::cin >> word;

	std::unordered_map<char, int> wordcount;

	//대소문자 구분 알파벳 count
	for (char& c : word)
	{
		if (std::isalpha(c))
		{
			wordcount[std::toupper(c)]++;
		}
	}

	for (const auto& p : wordcount)
	{
		if (p.second > cnt)
		{
			nf = p.first;
			cnt = p.second;
		}
		else if (p.second == cnt)
		{
			nf = '?';
		}
	}
	std::cout << nf << std::endl;
}