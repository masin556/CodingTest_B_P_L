#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    // game loop
    while (1) {
        int Max = 0, MaxIndex = 0;
        for (int i = 0; i < 8; i++)
        {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();

            // 해당 값 확인
            if (mountain_h > Max)
            {
                Max = mountain_h;
                MaxIndex = i;
            }
        }
        cout << MaxIndex << '\n';
    }
}