#include <iostream>
#include <vector>
#define MAX 50
using namespace std;

vector<int> tree[MAX];
int nodes, root, delN, inputN, leaf=0;

int dfs(int x)
{
    if (x == delN)
        return -1;
    
    if (!tree[x].size()) {
        leaf++;
        return 0;
    }
    
    for (int i = 0; i < tree[x].size(); i++) {
        if (dfs(tree[x][i]) == -1 && tree[x].size() == 1)
        {
            leaf++;
        }
    }
    return 0;
}

int main()
{
    cin >> nodes;
    for (int i = 0; i < nodes; i++) {
        cin >> inputN;
        if(inputN == -1)
        {
            root = i;
        }
        else
        {
            tree[inputN].push_back(i);
        }
    }
    
    cin >> delN; //지울 노드
    
    dfs(root);
    
    cout << leaf;
    return 0;
}