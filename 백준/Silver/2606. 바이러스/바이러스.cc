#include <iostream>
#include <algorithm>
#include <vector>
#define STR ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> Net[101];
bool    visited[101];
int Comput, NetCnt, a, b, WarmCnt = 0;

void dfs(int x)
{
    visited[x] = true;
    for(int i = 0; i < Net[x].size(); i++)
    {
        int y = Net[x][i];
        if(!visited[y])
        {
            dfs(y);
            WarmCnt++;
        }
    }
}


int main()
{
    STR;
    
    cin >> Comput >> NetCnt;
    
    for(int i = 1; i<= NetCnt; i++)
    {
        cin >> a >> b;
        Net[a].push_back(b);
        Net[b].push_back(a);
    }
    
    dfs(1);
    cout << WarmCnt << "\n";
}