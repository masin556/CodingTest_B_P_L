#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v[42] = {0}, n , count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        v[n % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (v[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}