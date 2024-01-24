#include <iostream>
#include <sstream>

int main() {
    // 문자열 입력 받기
    std::string str;
    std::getline(std::cin, str);
    int cnt = 0;

    std::istringstream word(str);

    while (word >> str)
    {
        cnt++;
    }

    std::cout <<  cnt << std::endl;
    return 0;
}
