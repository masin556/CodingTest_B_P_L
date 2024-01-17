#include <iostream>
using namespace std;

int main()
{
    int n[31] = {};
    int check;

    for (int i = 0; i < 28; i++) {
        cin >> check;
        n[check]++;
    }

    for (int i = 1; i <= 30; i++) {
        if (!n[i]) {
            cout << i << endl;
        }
    }
    return 0;
}