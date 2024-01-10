/* greedy풀이 */
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    
    while(n >= 0)
    {
        if(n % 5 == 0)
        {
            count += (n / 5);
            cout << count << "\n";
            return 0;
        }
        n -= 3;
        count++;
    }
    cout << -1 << "\n";
}