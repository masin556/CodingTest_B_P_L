#include <iostream>
/*ASCII
A 97 B 98 C 99 D 100 E 101 F 102 G 103 H 104 I 105 J 106 K 107 L 108 M 109 N 110 O 111 P 112 Q 113 R 114 S 115 T 116 U 117 V 118 W 119 X 120 Y 121 Z 122
*/
int main()
{
    std::string alpha;
    int         time = 0;
    std::cin >> alpha;

    for (int i = 0; i < alpha.size(); i++)
    {
        time += (((int)alpha[i] - 65) / 3) + 3;
        if (alpha[i] == 'S' || alpha[i] == 'V' || alpha[i] == 'Y' || alpha[i] == 'Z')
            time--;
    }
    std::cout << time;
}