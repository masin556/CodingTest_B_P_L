#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    
    int mint = 100001;
    int maxt = 0;
    
    for(int i = 0; i < n; i++) {
        int num = 0; 
        cin >> num;
        mint = min(mint, num);
        maxt = max(maxt, num);
    }
    int result = mint * maxt;
    cout << result << endl;
    
}