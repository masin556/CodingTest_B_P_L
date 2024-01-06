#include <iostream>
#include <vector>
#include <algorithm>
#define STR ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main()
{
    STR;
    int n; 
    cin >> n;
    
    vector<pair<int, int>> po(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> po[i].first >> po[i].second;
    }
    
    sort(po.begin(), po.end());
    
    for(const auto& p : po)
    {
        cout << p.first <<  " " << p.second << '\n';
    }
    
    return 0;
}