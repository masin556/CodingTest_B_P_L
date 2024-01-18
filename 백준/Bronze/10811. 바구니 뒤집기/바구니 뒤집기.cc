#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int bas[101];
    int n, m, a, b;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        bas[i] = i;
    }
    
    while(m--)
    {
        cin >> a >> b;
        if ( a != b )
        {
            for (int i = 0; i <= (b - a) / 2; i++)
            {
                swap(bas[a + i], bas[b - i]);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << bas[i] << " ";
    }
    return 0;
}