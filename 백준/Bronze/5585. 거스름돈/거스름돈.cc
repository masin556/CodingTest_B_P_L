#include <iostream>
#define STR ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    STR;
    int p, result = 0, coin[6] = {500,100,50,10,5,1};
    cin >> p;
    p = 1000 - p;
    
    for(auto& zzalzzali : coin )
    {
        result += (p / zzalzzali);
        p %= zzalzzali;
    }
    cout << result;
    return 0;
}