#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string alpha = "abcdefghijklmnopqrstuvwxyz";
    std::cin >> str;

    for (int i = 0; i < alpha.length(); i++)
    {
        std::cout << (int)str.find (alpha[i]) << " ";
    }
    return 0;
}