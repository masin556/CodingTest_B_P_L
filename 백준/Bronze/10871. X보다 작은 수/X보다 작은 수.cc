#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    
    int arr[10000];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        
        if(arr[i] < X)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
