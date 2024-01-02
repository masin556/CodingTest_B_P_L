#include <iostream>
#include <cmath>
#define STREAM ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main()
{
    STREAM;
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    long long distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    if (pow(distance, 2) < pow(r1 + r2, 2))
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}