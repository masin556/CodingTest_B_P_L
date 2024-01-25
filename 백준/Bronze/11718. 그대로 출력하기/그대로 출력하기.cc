#include <iostream>
#include <string>

int main()
{
    std::string str;

    while (1)
    {
        getline(std::cin, str);
        if (str == "")
        {
            break;
        }
        std::cout << str <<std::endl;
    }
}