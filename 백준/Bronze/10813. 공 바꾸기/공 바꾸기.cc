#include <iostream>
using namespace std;

int basket[101] = {};

void swap(int a, int b)
{
    int temp = basket[a];
    basket[a] = basket[b];
    basket[b] = temp;
}

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)
    {
        basket[i] = i;
    }
    
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        swap(a, b);
    }
    
    for(int i = 1; i <= n; i++)
    {
        cout << basket[i] << '\n';
    }
    
    return 0;
}