#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cin.tie(NULL);

	int T = 0;
	std::cin >> T;
	short A, B;
	while (T != 0)
	{
		std::cin >> A >> B;
		std::cout << A + B << '\n';
		T--;
	}

	return 0;
}