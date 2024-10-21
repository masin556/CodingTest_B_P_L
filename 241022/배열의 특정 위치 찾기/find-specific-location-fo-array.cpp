#include <iostream>
#include <stdio.h>
using namespace std;

// 문제가 개 헷갈림... 짝수번째 그냥 짝수가 되면 되는줄

int main() {
    int n[10]; 
    int evensum = 0, oddsum = 0, cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            evensum += n[i];
        }
        
        if ((i + 1) % 3 == 0)
        {
            oddsum += n[i];
            cnt++;
        }
    }
    printf ("%d %.1f", evensum, (float)(oddsum / cnt));
    return 0;
}