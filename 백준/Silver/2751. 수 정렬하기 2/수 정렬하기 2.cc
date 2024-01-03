#include <iostream>
#include <algorithm>
#include <vector>
#define ST ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main()
{
    ST;
    
    int n;
    cin >> n;
    vector<int> a(n, 0);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    sort(a.begin(), a.end());
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
    return 0;
}
