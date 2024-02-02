#include <iostream>
#define MAX 11
using namespace std;

int main()
{
    int ch[MAX] = {1, 1, 2, 2, 2, 8};
    int white[MAX];

    for (int i = 0; i < 6; i++)
    {
        cin >> white[i];
        ch[i] -= white[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << ch[i] << " ";
    }
}