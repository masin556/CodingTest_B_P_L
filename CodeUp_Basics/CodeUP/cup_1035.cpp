#include <iostream>

using namespace std;

int main()
{
	// short 로 하면 해당 2byte IDE 마다 다르지만. 값이 이상하게 나오는 경우가 있다. int형으로 주자
	//unsigned short hexd2;
	int hexd;
	cin >> hex >> hexd;

	cout << oct << hexd;
	return 0;
}