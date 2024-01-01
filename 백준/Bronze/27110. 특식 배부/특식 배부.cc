#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,ans=0;
    cin >> n >> a >> b >> c;
    
    n > a ? ans += a : ans += n;
    n > b ? ans += b : ans += n;
    n > c ? ans += c : ans += n;
    
    cout << ans;
    return 0;
}