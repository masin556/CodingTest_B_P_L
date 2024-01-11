#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int index, arr[9], max = -1;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
   

    for (int i = 0; i < 9; i++) {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    cout << max << endl;
    cout << index + 1 << endl;

    return 0;
}
