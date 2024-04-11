/* https://codeup.kr/problem.php?id=1020 */

#include <iostream>
#include <string>
using namespace std;


int main()
{
	string address, em;
	cin >> address;

	for (int i = 0; i < address.size(); i++)
	{
		if (address[i] != '-')
		{
			em += address[i];
		}
	}

	//address.erase(remove(address.begin(), address.end(), '-'), address.end());

	cout << em;
}